#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    int arr[] = {1,2,3,2,4,5,1};
    int n = 7;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    for(auto x : mp) {
        if(x.second > 1)
            cout << x.first << " ";
    }

    return 0;
}