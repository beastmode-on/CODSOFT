/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
#include<iostream>
using namespace std;

int main() {
    float a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

   if (op == '+')
        cout << "Result: " << (a + b) << endl;
    else if (op == '-')
        cout << "Result: " << (a - b) << endl;
    else if (op == '*')
        cout << "Result: " << (a * b) << endl;
    else if (op == '/')
        cout << (b != 0 ? "Result: " + to_string(a / b) : "Error: Division by zero!") << endl;
    else
        cout << "Invalid operator!" << endl;

    return 0;
}
