#include<iostream>
using namespace std;

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

    int maxSum = arr[0];
    int current = arr[0];

    for(int i=1;i<9;i++) {
        current = max(arr[i], current + arr[i]);
        maxSum = max(maxSum, current);
    }

    cout << maxSum;
}