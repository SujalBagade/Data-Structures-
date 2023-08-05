#include <iostream>
using namespace std;


void getData(int arr[], int size) {
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}


int calculateMax(int arr[], int size) {
    int maxElement = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size. Please enter a positive value." << endl;
        return 1;
    }

    int* arr = new int[size]; 

    getData(arr, size);

    int maxElement = calculateMax(arr, size);
    cout << "The maximum element in the array is: " << maxElement << endl;

    delete[] arr; 
    return 0;
}
