#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
    int num1, num2, num3;
    int consoleWidth = 150;
    cout << "Введіть 3 числа розділені пробілами: ";
    if (!(cin >> num1 >> num2 >> num3)) {
        cout << setw((consoleWidth - 25) / 2) << "Введений неправильний тип даних" << endl;
        return 0;
    }

    int minNumber = num1;

    if (num2 < minNumber) {
        minNumber = num2;
    }

    if (num3 < minNumber) {
        minNumber = num3;
    }


    cout << setw((consoleWidth - 25) / 2) << "Найменше число: " << minNumber << endl;

    return 0;
}