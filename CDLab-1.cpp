#include<iostream>
using namespace std;


double calculateAverage(int arr[], int size) {

    if (size == 0) {
        return 0.0;
    }


    int arraySum = 0;
    for (int i = 0; i < size; ++i) {
        arraySum += arr[i];
    }


    double average = static_cast<double>(arraySum) / size;

    return average;
}

int main() {

    const int arraySize = 5;
    int cars[arraySize] = {1, 2, 3, 4, 5};

    double result = calculateAverage(cars, arraySize);

    cout << "Average: " << result << endl;

    return 0;
}
