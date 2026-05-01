#include<iostream>
#include<vector>
using namespace std;

// Function to find pair sum
void pairSum(vector<int> arr, int target) {

    for(int i = 0; i < arr.size(); i++) {

        for(int j = i + 1; j < arr.size(); j++) {

            if(arr[i] + arr[j] == target) {

                cout << arr[i] << " + "
                     << arr[j] << " = "
                     << target << endl;
            }
        }
    }
}

int main() {

    vector<int> arr{1,2,3,4,5};

    int target = 7;

    pairSum(arr, target);

    return 0;
}