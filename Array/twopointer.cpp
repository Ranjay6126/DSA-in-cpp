#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int dray[], int n){

    int start = 0;
    int end = n-1;
    while(start<end){
        swap(dray[start], dray[end]);
            start++;
            end--;  
    }
}

void printArray(int dray[], int n){
    for(int i=0; i<n; i++){
        cout<<dray[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6] = {1,2,3,4,6,7};
    int barray[7]= {17,30,41,52,62,73,90};

    reverse(arr, 6);
    reverse(barray, 7);

    printArray(arr, 6);
    printArray(barray, 7);

    return 0;
}