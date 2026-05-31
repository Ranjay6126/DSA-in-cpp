#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    int arr[] = {2,2,1,1,2,2,2};
    int n = 7;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    for(auto x : mp) {
        if(x.second > n/2) {
            cout << x.first;
            break;
        }
    }

    return 0;
}