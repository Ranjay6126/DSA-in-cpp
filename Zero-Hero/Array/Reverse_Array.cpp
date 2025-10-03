#include<iostream>
using namespace std;

void Reverse(int array[], int size) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int num[100];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    Reverse(num, size);

    cout << "The reversed array is: ";
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
