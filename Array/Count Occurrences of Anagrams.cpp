#include <bits/stdc++.h>
using namespace std;

int countAnagrams(string txt, string pat) {
    vector<int> p(26, 0), w(26, 0);

    for (char c : pat) p[c - 'a']++;

    int k = pat.size(), count = 0;

    for (int i = 0; i < txt.size(); i++) {
        w[txt[i] - 'a']++;

        if (i >= k) {
            w[txt[i - k] - 'a']--;
        }

        if (w == p) count++;
    }

    return count;
}
