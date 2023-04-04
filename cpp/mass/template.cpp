#include<iostream>
using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            T temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}


int main() {
    // int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    char arr[] = {'a', 'z', 'w', 'b'};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}
