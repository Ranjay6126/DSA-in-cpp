#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    int arr[] = {1,2,3,2,1,4};
    int n = 6;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    cout << "Distinct Elements = " << mp.size();

    return 0;
}