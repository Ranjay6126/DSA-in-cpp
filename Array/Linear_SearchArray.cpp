#include<iostream>
using namespace std;

int Linear_search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[100];
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    int result = Linear_search(arr, size, key);

    if(result != -1){
        cout << "Key found at index: " << result << endl;
    } 
    else{
        cout << "Key does not exist in the array" << endl;
    }

    return 0; 
}

