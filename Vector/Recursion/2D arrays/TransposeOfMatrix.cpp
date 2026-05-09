// #include<iostream>
// using namespace std;

// // transpose function
// void Transpose(int dra[][3], int row, int col){

//     int transpose[3][3];

//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){

//             transpose[j][i] = dra[i][j];
//         }
//     }

//     // printing transpose matrix
//     for(int i = 0; i < col; i++){
//         for(int j = 0; j < row; j++){
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){

//     int dra[3][3];

//     cout << "Take the input of the 2D array" << endl;

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cin >> dra[i][j];
//         }
//     }

//     cout << "After transpose the matrix" << endl;

//     Transpose(dra, 3, 3);

//     return 0;
// }



#include<iostream>
using namespace std;

void Transpose_Matrix(int arr[][3], int r, int c, int transposeArr[][3]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void Printing_array(int arr[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<< arr[i][j] << " ";
        }
         cout<<endl;
    }
   
}

int main(){

    int arr[3][3];
    cout<<"take the input from the user"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }


    int transposeArr[3][3];
    Transpose_Matrix(arr,3, 3, transposeArr);

    cout<<"After the transpose the matrix"<<endl;

        Printing_array(transposeArr, 3, 3);

    return 0;
}