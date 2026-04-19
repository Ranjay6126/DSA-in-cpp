#include<iostream>
using namespace std;

void moveZeros(int arr[], int n){
    int j = 0;

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}