#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <limits>
using namespace std;
const int arrSize = 10;

int main() {
    setlocale(LC_ALL, "ukr");
    srand(static_cast<unsigned>(std::time(0)));

    int arr[arrSize];
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < arrSize; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "Початковий масив:" << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arrSize; ++i) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << "Мінімальне значення в масиві: " << min << endl << "Максимальне значення в масиві: " << max << endl;

    return 0;
}