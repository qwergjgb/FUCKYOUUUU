#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "������� ������ �����: ";
    cin >> num1;
    cout << "������� ������ �����: ";
    cin >> num2;
    cout << "������� �������� (+, -, *, /): ";
    cin >> op;

    cout << "���������: " << calculate(num1, num2, op) << endl;

    return 0;
}
