#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    int arr1[] = {1,2,3,4};
    int arr2[] = {4,3,2,1};

    unordered_map<int,int> mp;

    for(int x : arr1)
        mp[x]++;

    for(int x : arr2)
        mp[x]--;

    bool equal = true;

    for(auto x : mp) {
        if(x.second != 0) {
            equal = false;
            break;
        }
    }

    cout << (equal ? "Equal" : "Not Equal");

    return 0;
}