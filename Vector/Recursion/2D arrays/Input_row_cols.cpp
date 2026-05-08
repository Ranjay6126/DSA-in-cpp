#include<iostream>
using namespace std;

int main(){

    int arr[4][3];
    int row = 4;
    int col = 3;

    // input row wise
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];   // for the input column wise arr[j][i];
        }
    }
    
    // output
    cout << "Printing row wise" << endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " "; // cout<<arr[i][j]
        }
        cout << endl;
    }

    return 0;
}