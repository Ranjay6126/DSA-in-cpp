#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {
    if (n < 2) {
        return -1; // Not enough elements
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = secondLargest(arr, n);

    if (result == INT_MIN) {
        cout << "No second largest element exists";
    } else {
        cout << "Second largest element is: " << result;
    }

    return 0;
}
