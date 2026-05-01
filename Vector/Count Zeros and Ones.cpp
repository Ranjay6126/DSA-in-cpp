#include<iostream>
#include<vector>
using namespace std;

void countZeroOne(const vector<int>& arr) {

    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] == 0)
            zeroCount++;

        else if(arr[i] == 1)
            oneCount++;
    }

    cout << "Zero Count: "
         << zeroCount << endl;

    cout << "One Count: "
         << oneCount;
}

int main() {

    vector<int> arr{1,0,1,1,0,0,1};

    countZeroOne(arr);

    return 0;
}

