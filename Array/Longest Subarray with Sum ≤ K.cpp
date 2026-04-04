#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    int left = 0, sum = 0, maxLen = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
