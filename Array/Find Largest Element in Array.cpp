#include<iostream>
using namespace std;

int findLargest(int arr[], int n){

    int maxi = arr[0];

    for(int i=1; i<n; i++){

        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    return maxi;
}

int main(){

    int arr[] = {2,8,1,15,4};
    int n = 5;

    cout << "Largest Element: " << findLargest(arr, n);

    return 0;
}