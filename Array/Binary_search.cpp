#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int l = 0, r = arr.size()-1;

    while(l <= r) {
        int mid = l + (r-l)/2;

        if(arr[mid] == target)
            return mid;

        if(arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    cout << binarySearch(arr,4);
}