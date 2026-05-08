// // row wise sum

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[3][3];

//     cout << "Take the input of 2D array" << endl;

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Row wise sum:" << endl;

//     for(int i = 0; i < 3; i++){

//         int sum = 0;

//         for(int j = 0; j < 3; j++){
//             sum = sum + arr[i][j];
//         }

//         cout << "Sum of row " << i << " = " << sum << endl;
//     }

//     return 0;
// }

// coumn wise sum



#include<iostream>
using namespace std;

void Sumofarray(int brr[][3], int rows, int cols) {

    cout << "Printing column wise sum" << endl;

    for(int i = 0; i < cols; i++){

        int sum = 0;

        for(int j = 0; j < rows; j++){

            sum = sum + brr[j][i];
        }

        cout << sum << endl;
    }
}

int main(){

    int brr[4][3];

    int rows = 4;
    int cols = 3;

    cout << "Take the input" << endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> brr[i][j];
        }
    }

    Sumofarray(brr, rows, cols);

    return 0;
}