#include<iostream>
using namespace std;


void findMinAndMax(int arr[], int size, int &minValue, int &maxValue) {

    if (size == 0) {
        cout << "Array is empty." << endl;
        return;
    }


    minValue = arr[0];
    maxValue = arr[0];


    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        } else if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}

int main() {

    const int arraySize = 5;
    int cars[arraySize] = {3, 1, 4, 2, 5};

    int minValue, maxValue;
    findMinAndMax(cars, arraySize, minValue, maxValue);

    cout << "Minimum value: " << minValue << endl;
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}

