#include<iostream>
using namespace std;

int main(){

    int arr[4][3]={
        {1,3,5},
        {7,8,9},
        {4,7,1},
        {9,3,7}};

    //printing row-wise 
cout<<"Printing row wise:-"<<endl;
    //outer loops
    for(int i=0; i<4; i++){
        //for every row, we need to print value in each column
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //printing column-wise 
cout<<"Now column wise printing:-"<<endl;

    for(int i=0; i<3; i++ ){
        for(int j=0; j<4; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
