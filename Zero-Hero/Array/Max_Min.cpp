#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int GetMax (int array[], int size){

    int max = INT_MIN;  // -2^31 to -2^31 -1 ;

    for(int i=0; i < size; i++){

        if(array[i] > max){

            max = array[i];
        }
    }

return max;

}

 int GetMin(int array[], int size){

    int min = INT_MAX;

    for(int i = 0; i < size; i++){

        if(array[i] < min){
            
            min = array[i];
        }

    }
    return min;

 }

int main(){

    int size;
    cin>> size;

    int arr[100];

   // taking input in array

   for(int i=0; i<size; i++){

    cin>> arr[i] ;

   }

   cout<<"the value is max"<< GetMax(arr, size) <<endl;
   cout<<"the value is min" << GetMin(arr, size) <<endl;
   
}