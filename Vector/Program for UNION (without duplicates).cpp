#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr{1,2,3,4,5,6,2,3,4,5};
    vector<int> brr{1,23,7,85,6,3,4,1,2};

    vector<int> ans;

    // Insert elements from first array
    for(int i = 0; i < arr.size(); i++) {

        bool found = false;

        // check duplicate in ans
        for(int j = 0; j < ans.size(); j++) {
            if(arr[i] == ans[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            ans.push_back(arr[i]);
        }
    }

    // Insert elements from second array
    for(int i = 0; i < brr.size(); i++) {

        bool found = false;

        for(int j = 0; j < ans.size(); j++) {
            if(brr[i] == ans[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            ans.push_back(brr[i]);
        }
    }

    // Print Union
    cout << "Union is: ";

    for(auto value : ans) {
        cout << value << " ";
    }

    return 0;
}