#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> freq(256, -1);
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        if (freq[s[right]] >= left) {
            left = freq[s[right]] + 1;
        }
        freq[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}