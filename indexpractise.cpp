#include <iostream>

using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int size;

    cout << "請輸入共幾個數: ";
    cin >> size;

    int* arr = new int[size];

    cout << "輸入輸字: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "反轉前: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "反轉後: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
