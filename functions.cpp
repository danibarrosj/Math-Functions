#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    int choice;
    double x, y;
    long int lx;
    srand(time(0));

   while (true) {
        cout << "Choose an operation:" << endl;
        cout << "1. Square Root" << endl;
        cout << "2. Exponential" << endl;
        cout << "3. Absolute Value (Floating-Point)" << endl;
        cout << "4. Round to Nearest Integer" << endl;
        cout << "5. Power Function" << endl;
        cout << "6. Absolute Value (Long Integer)" << endl;
        cout << "7. Ceiling Function" << endl;
        cout << "8. Floor Function" << endl;
        cout << "9. Generate Random Number" << endl;
        cout << "10. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter a number for Square Root: ";
            cin >> x;
            cout << "The square root of " << x << " is " << sqrt(x) << endl;
            break;
        case 2:
            cout << "Enter a number for Exponential: ";
            cin >> x;
            cout << "The exponential of " << x << " is " << exp(x) << endl;
            break;
        case 3:
            cout << "Enter a floating-point number for Absolute Value: ";
            cin >> x;
            cout << "The absolute value of " << x << " is " << fabs(x) << endl;
            break;
        case 4:
            cout << "Enter a floating-point number for Rounding: ";
            cin >> x;
            cout << "The rounded integer value of " << x << " is " << rint(x) << endl;
            break;
        case 5:
            cout << "Enter base (x): ";
            cin >> x;
            cout << "Enter exponent (y): ";
            cin >> y;
            cout << x << " raised to the power " << y << " is " << pow(x, y) << endl;
            break;
        case 6:
            cout << "Enter a long integer for Absolute Value: ";
            cin >> lx;
            cout << "The absolute value of " << lx << " is " << labs(lx) << endl;
            break;
        case 7:
            cout << "Enter a floating-point number for Ceiling Function: ";
            cin >> x;
            cout << "The ceiling value of " << x << " is " << ceil(x) << endl;
            break;
        case 8:
            cout << "Enter a floating-point number for Floor Function: ";
            cin >> x;
            cout << "The floor value of " << x << " is " << floor(x) << endl;
            break;
        case 9:
            cout << "Generated random number: " << rand() << endl;
            break;
        case 10:
            cout << "Exiting program..." << endl;
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;

}
