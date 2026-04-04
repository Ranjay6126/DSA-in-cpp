#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int windowSum = 0;

    // first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // sliding
    for (int i = k; i < n; i++) {
        windowSum += arr[i];        // add next
        windowSum -= arr[i - k];    // remove previous
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}