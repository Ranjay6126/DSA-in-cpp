#include<iostream>
#include<unordered_map>
using namespace std;

void twoSum(int arr[], int n, int target){
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        int complement = target - arr[i];

        if(mp.find(complement) != mp.end()){
            cout << "Pair: " << arr[i] << " " << complement << endl;
            return;
        }
        mp[arr[i]] = i;
    }
}