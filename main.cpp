#include <iostream>
#include <windows.h>
#include "functions.h"
#include "functions.cpp"
using namespace std;

int main() {
 int num1, num2;
char op;
  SetConsoleOutputCP(1251);
  SetConsoleCP(1251);
    cout << "������� ������ �����: ";
    cin >> num1;
    cout << "������� ������ �����: ";
    cin >> num2;
    cout << "������� �������� (+, -, *, /): ";
    cin >> op;
  cout << "���������: " << calculate(num1, num2, op)<< endl;

    return 0;
}
