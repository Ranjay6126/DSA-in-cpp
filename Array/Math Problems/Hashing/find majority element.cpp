#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2,2,1,1,2,2,2};
    int n = 7;

    unordered_map<int,int> freq;

    for(int x : arr)
        freq[x]++;

    for(auto p : freq) {
        if(p.second > n/2) {
            cout << p.first;
            break;
        }
    }

    return 0;
}