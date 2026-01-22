#include <iostream>
using namespace std;

int main() {

    double num1, num2;
    char operation;

    cout << "Enter first num: ";
    cin >> num1;

    cout << "Choose the Operation(+, -, *, /): ";
    cin >> operation;

    cout << "Enter second num: ";
    cin >> num2;

    if (operation == '+') {
        cout << "ans: " << num1 + num2;
    }

    else if (operation == '-') {
        cout << "ans: " << num1 - num2;
    }

    else if (operation == '*') {
        cout
         << "ans: " << num1 * num2;
    }
    else if (operation == '/') {

        if (num2 != 0) {
            cout << "ans: " << num1 / num2;
        } 
        else {
            cout << "zero can't be divided!";
        }
    }
    
    else {
        cout << "invalid operator";
    }

    return 0;
}
