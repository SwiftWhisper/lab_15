#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
const int arrSize = 10;

int main() {
    setlocale(LC_ALL, "ukr");
    srand(static_cast<unsigned>(std::time(0)));

    int arr[arrSize];

    for (int i = 0; i < arrSize; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "���������� �����:" << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        }
    }
    std::cout << "����� ���� ��������� ������ ��������: " << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}