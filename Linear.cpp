#include<iostream>
using namespace std;


bool search (int arr[], int size, int key){

    for(int i=0; i<size; i++){

        if(arr[i]== key){
            
            return 1;

        }
    }
    return 0;
}

int main(){

    int arr[10] = {10,20,30,40,50,60,70,80,90,100};

    int key;
    cout<<  "Enter the key to search:" << endl ;
    cin>> key; 

    bool found = search(arr, 10, key);

    if(found){
        cout<< "Key is found here "<< endl;

    }else{
        cout<<"key is not found here<<"<< endl;
    }


return 0;

}