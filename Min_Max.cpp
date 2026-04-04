#include<iostream>
#include<climits> // Add this line for INT_MIN and INT_MAX
using namespace std;

// Function to get the maximum value
int getMax(int num[], int n) {
    int max = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

// Function to get the minimum value
int getMin(int num[], int n) {
    int min = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        if(num[i] < min) {
            min = num[i];
        }
    }
    return min;
}

int main() {
    int size;
    cin >> size;

    int num[100];
    
    // Taking input in the array
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }
    
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}
