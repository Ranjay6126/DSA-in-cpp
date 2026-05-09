#include<iostream>
#include<climits>
using namespace std;

void Min_max(int brr[][3], int row, int col){

    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){

            if(brr[i][j] < minimum){
                minimum = brr[i][j];
            }

            if(brr[i][j] > maximum){
                maximum = brr[i][j];
            }
        }
    }

    cout << "Minimum element is: " << minimum << endl;
    cout << "Maximum element is: " << maximum << endl;
}

int main(){

    int brr[4][3];

    cout << "Enter the elements of 2D array" << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cin >> brr[i][j];
        }
    }

    Min_max(brr, 4, 3);

    return 0;
}