#include<iostream>
using namespace std;

int main(){

    int arr[3][3];

    cout << "Take the input of 2D array" << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Row wise sum:" << endl;

    for(int i = 0; i < 3; i++){

        int sum = 0;

        for(int j = 0; j < 3; j++){
            sum = sum + arr[i][j];
        }

        cout << "Sum of row " << i << " = " << sum << endl;
    }

    return 0;
}