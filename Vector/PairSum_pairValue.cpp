#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec{10,20,30,40,50,60,70};
    int target = 70;

    for(int i = 0; i < vec.size(); i++){

        int element = vec[i];

        for(int j = i + 1; j < vec.size(); j++){

            // all possible pairs
            // cout << "(" << element << "," << vec[j] << ")" << endl;

            if(element + vec[j] == target){

                cout << "Pair found: ";
                cout << "(" << element << "," << vec[j] << ")" << endl;
            }
        }
    }

    return 0;
}