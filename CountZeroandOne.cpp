#include<iostream>
using namespace std;

void counting(int arr[], int size){
    int numOne  = 0; 
    int numZero = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            numZero++;
        } else {
            numOne++;
        }
    }

    cout << "The number of zeros is: " << numZero << endl;
    cout << "The number of ones is: " << numOne << endl;
}

int main(){

    int arr[] = {1,1,0,1,0,0,1,0,0,0};
    int size = 10;

    counting(arr, size);

    return 0;
}