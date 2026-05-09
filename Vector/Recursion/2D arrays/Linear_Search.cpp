#include<iostream>
using namespace std;

bool FindKey(int arr[][5], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[6][5];
    int row = 6;
    int col = 5;

    int key = 31;

    cout << "Take the input of 2D array" << endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    bool result = FindKey(arr, row, col, key);

    if(result){
        cout << "Key !! found in the 2D array" << endl;
    }
    else{
        cout << "Key NOT found in the 2D array" << endl;
    }

    return 0;
}