#include <iostream>

using namespace std;

int main()
{
    char operation;
    double num1, num2;

    cout << "Pilih +, -, *, / : " << endl;
    cin >> operation;

    cout << "Masukkan angka pertama dan kedua tanpa operator : " << endl;
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error : Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}