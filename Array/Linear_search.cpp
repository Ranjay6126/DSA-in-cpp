#include<iostream>
using namespace std;

bool Linear_search(int array[], int size , int key){

    for(int i=0; i<size; i++){
        if(array[i] == key){
            return true;
        }
    }
    return false;
}

int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int array[100];

    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];  
    }

    int key;
    cout << "Enter the key value: ";
    cin >> key;

    if(Linear_search(array, size, key)){
        cout << "The key is present." << endl;
    } else {
        cout << "The key is absent." << endl;
    }

    return 0;
}
