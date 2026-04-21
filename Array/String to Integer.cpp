#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int i = 0, sign = 1;
    long result = 0;

    while (i < s.size() && s[i] == ' ') i++;

    if (s[i] == '+' || s[i] == '-') {
        sign = (s[i++] == '-') ? -1 : 1;
    }

    while (i < s.size() && isdigit(s[i])) {
        result = result * 10 + (s[i++] - '0');
        if (result > INT_MAX) break;
    }

    return sign == 1 ? min(result, (long)INT_MAX) : max(-result, (long)INT_MIN);
}