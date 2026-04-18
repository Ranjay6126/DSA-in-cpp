#include<iostream>          // Includes input-output stream library
using namespace std;        // Allows use of cout, cin without std::

// Function to increment first element of array
void inc (int arr[], int size){
     arr[0] += 10;         // Adds 10 to first element of array
}

// Function to print array elements
void printinc(int arr[], int size){
    for(int i=0; i<size; i++){   // Loop from index 0 to size-1
        cout << arr[i] << " ";   // Print each element with space
    }
    cout << endl;                // Move to next line after printing array
} 

int main(){
    
    int arr[] = {1,3,5};   // Declare and initialize array
    int size = 3;          // Store size of array
    
    inc(arr, size);        // Call function to modify array (arr[0] becomes 11)
    printinc(arr, size);   // Print updated array → 11 3 5
    
    for(int i=0; i<size; i++){  // Loop to print array again
        cout << arr[i]<< " ";       // Print elements without space
    }
    
}