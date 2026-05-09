#include<iostream>
using namespace std;

bool FindKey(int arr[][5], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[6][5];
    int row=6;
    int col=5;

    int key=5;

    cout<<"Take the input of 2d array"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    
    cout<<"the key find in the 2d array"<<FindKey(arr,6,5,5)<<endl;


    return 0;
}