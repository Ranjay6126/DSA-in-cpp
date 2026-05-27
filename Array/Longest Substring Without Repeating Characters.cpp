#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){

    unordered_map<char, int> mp;

    int left = 0;
    int maxi = 0;

    for(int right = 0; right < s.length(); right++){

        if(mp.find(s[right]) != mp.end() && mp[s[right]] >= left){
            left = mp[s[right]] + 1;
        }

        mp[s[right]] = right;

        maxi = max(maxi, right - left + 1);
    }

    return maxi;
}

int main(){

    string s = "abcabcbb";

    cout << lengthOfLongestSubstring(s);

    return 0;
}