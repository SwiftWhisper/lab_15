#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ukr");
	int num1, num2;
	cout << "Введіть 2 числа" << endl;
	if (!(cin >> num1 >> num2)) {
		cout << "Неправильний тип даних" << endl;
		return 0;
	}
	if (num1 > num2) {
		cout << "Перше число: " << num1 << endl;

	}
	else {
		cout << "Перше число: " << num1 << " Друге число: " << num2 << endl;
	}
	return 0;
}