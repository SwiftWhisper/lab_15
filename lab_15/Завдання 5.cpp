#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
const int arrSize = 10;

int main() {
    setlocale(LC_ALL, "ukr");
    srand(static_cast<unsigned>(std::time(0)));

    int arr[arrSize];
    int sum = 0;

    for (int i = 0; i < arrSize; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "���������� �����:" << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "��������� �����: " << endl;
    for (int i = arrSize - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}