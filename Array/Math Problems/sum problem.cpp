#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int arr[] = {2,7,11,15};
    int target = 9;

    unordered_map<int,int> mp;

    for(int i=0;i<4;i++) {
        int complement = target - arr[i];

        if(mp.find(complement) != mp.end()) {
            cout << mp[complement]
                 << " " << i;
            break;
        }

        mp[arr[i]] = i;
    }
}