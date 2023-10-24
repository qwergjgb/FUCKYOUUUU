#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "¬ведите первое число: ";
    cin >> num1;
    cout << "¬ведите второе число: ";
    cin >> num2;
    cout << "¬ведите оператор (+, -, *, /): ";
    cin >> op;

    cout << "–езультат: " << calculate(num1, num2, op) << endl;

    return 0;
}
