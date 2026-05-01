#include<iostream>
#include<vector>
using namespace std;

void extremePrint(const vector<int>& arr) {

    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) {

        if(start == end) {
            cout << arr[start] << " ";
        }
        else {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
}

int main() {

    vector<int> arr{1,2,3,4,5,6};

    extremePrint(arr);

    return 0;
}