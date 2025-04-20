#include <iostream>
#include <limits>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    // Input validation for the first number
    if (cin.fail())
        {
        cerr << "Invalid input. Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Input validation for the operator (basic check)
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
        {
        cerr << "Invalid operator. Please use +, -, *, or /." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }

    cout << "Enter second number: ";
    cin >> num2;

    // Input validation for the second number
    if (cin.fail())
        {
        cerr << "Invalid input. Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }

    double result;

    switch (operation)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cerr << "Error: Division by zero!" << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cerr << "Error: Unknown operator!" << endl;
            return 1;
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}
