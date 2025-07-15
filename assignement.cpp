#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { 
    if(b == 0) { 
        cout << "Error: Cannot divide by zero!\n"; 
        return 0; 
    }
    return a / b; 
}

int main() {
    int choice;
    double num1, num2;
    
    while(true) {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nChoose: ";
        cin >> choice;
        if(choice == 5) break;  
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        
        switch(choice) {
            case 1: cout << "Sum: " << add(num1, num2); break;
            case 2: cout << "Difference: " << subtract(num1, num2); break;
            case 3: cout << "Product: " << multiply(num1, num2); break;
            case 4: cout << "Quotient: " << divide(num1, num2); break;
            default: cout << "Invalid choice!";
        }
        cout << endl;
    }
    return 0;
}