document.addEventListener('DOMContentLoaded', () => {
    const loginForm = document.getElementById('loginForm');
    const otpForm = document.getElementById('otpForm');
    const message = document.getElementById('message');

    // अगर लॉगिन फॉर्म मौजूद है
    if (loginForm) {
        loginForm.addEventListener('submit', async (e) => {
            e.preventDefault();
            const username = document.getElementById('username').value;

            const response = await fetch('/login', {
                method: 'POST',
                headers: { 'Content-Type': 'application/json' },
                body: JSON.stringify({ username })
            });

            const result = await response.json();
            message.textContent = result.message;

            if (response.ok) {
                // यूजर को OTP पेज पर भेजें और यूजरनेम साथ ले जाएं
                window.location.href = `otp.html?username=${username}`;
            }
        });
    }

    // अगर OTP फॉर्म मौजूद है
    if (otpForm) {
        // URL से यूजरनेम प्राप्त करें
        const urlParams = new URLSearchParams(window.location.search);
        const username = urlParams.get('username');
        document.getElementById('username').value = username; // छिपे हुए इनपुट में सेट करें

        otpForm.addEventListener('submit', async (e) => {
            e.preventDefault();
            const otp = document.getElementById('otp').value;

            const response = await fetch('/verify-otp', {
                method: 'POST',
                headers: { 'Content-Type': 'application/json' },
                body: JSON.stringify({ username, otp })
            });

            const result = await response.json();

            if (response.ok) {
                alert('Login Successful!');
                // यहाँ आप यूजर को डैशबोर्ड पर रीडायरेक्ट कर सकते हैं
                // window.location.href = '/dashboard.html';
            } else {
                message.textContent = result.message;
            }
        });
    }
});