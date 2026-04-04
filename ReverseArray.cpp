#include<iostream>
// #include<algorithm>
using namespace std;


void reverse( int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){

    for(int i=0; i<n ; i++){

        cout<< arr[i] << " ";
    }
    cout<< endl;
}


int main(){

int arr[5] = {10,20,30,40,50};

int brr[8] = {54,77,85,99,42,77,55,33};

printArray(arr, 5);
printArray(brr, 8);


return 0;


}