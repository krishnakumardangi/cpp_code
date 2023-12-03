#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Scientific Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Square root\n";
    cout << "6. Power\n";
    cout << "7. Sin\n";
    cout << "8. Cos\n";
    cout << "9. Tan\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice >= 1 && choice <= 4) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    } else if(choice >= 5 && choice <= 9) {
        cout << "Enter a number: ";
        cin >> num1;
    }

    switch(choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero is not allowed.";
                return 0;
            }
            break;
        case 5:
            result = sqrt(num1);
            break;
        case 6:
            result = pow(num1, 2);
            break;
        case 7:
            result = sin(num1);
            break;
        case 8:
            result = cos(num1);
            break;
        case 9:
            result = tan(num1);
            break;
        default:
            cout << "Invalid choice!";
            return 0;
    }

    cout << "The result is: " << result << endl;

    return 0;
}

