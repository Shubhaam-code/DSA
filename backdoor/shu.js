const express = require('express');
const path = require('path');

const app = express();
const PORT = 3000;

// Middleware to parse JSON bodies and serve static files
app.use(express.json());
app.use(express.static(path.join(__dirname, 'public')));

// --- OTP स्टोर करने के लिए ---
// असली एप्लीकेशन में इसे डेटाबेस (जैसे Redis) में स्टोर करना चाहिए।
// सीखने के लिए, हम इसे एक ऑब्जेक्ट में रखेंगे।
const otpStore = {};

// 1. लॉगिन के लिए एंडपॉइंट
app.post('/login', (req, res) => {
    const { username } = req.body;

    // असली ऐप में, आप यहाँ यूजरनेम/पासवर्ड डेटाबेस से चेक करेंगे।
    // अभी हम मान लेते हैं कि यूजरनेम सही है।

    // 6 अंकों का OTP जेनरेट करें
    const otp = Math.floor(100000 + Math.random() * 900000).toString();

    // OTP को 5 मिनट के लिए स्टोर करें (expiry time के साथ)
    const expirationTime = Date.now() + 5 * 60 * 1000; // 5 minutes from now
    otpStore[username] = { otp, expires: expirationTime };

    // =========================================================
    // || य हाँ OTP आपके सर्वर कंसोल पर दिखेगा ||
    // =========================================================
    console.log(`OTP for user ${username}: ${otp}`);
    // असली ऐप में, आप इस OTP को SMS या ईमेल से भेजेंगे।

    res.status(200).json({ message: 'OTP has been generated. Please verify.' });
});

// 2. OTP वेरिफाई करने के लिए एंडपॉइंट
app.post('/verify-otp', (req, res) => {
    const { username, otp } = req.body;

    const storedData = otpStore[username];

    if (!storedData) {
        return res.status(400).json({ message: 'Invalid request or OTP expired.' });
    }

    // समय की जांच करें कि OTP एक्सपायर तो नहीं हुआ
    if (Date.now() > storedData.expires) {
        delete otpStore[username]; // एक्सपायर्ड OTP को हटा दें
        return res.status(400).json({ message: 'OTP has expired. Please try again.' });
    }

    // OTP मिलाएं
    if (otp === storedData.otp) {
        // सफल होने पर OTP को हटा दें ताकि दोबारा इस्तेमाल न हो सके
        delete otpStore[username];
        res.status(200).json({ message: 'Login successful!' });
    } else {
        res.status(400).json({ message: 'Invalid OTP.' });
    }
});

// सर्वर शुरू करें
app.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`);
});