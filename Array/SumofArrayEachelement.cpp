#include<iostream>
using namespace std;

int SumofArray(int group[], int size){
    int sum = 0; 
    for(int j=0; j<size; j++){
    sum = sum + group[j];
    }
    return sum;
}

int main(){

    int group[1000];
    int size; 
    cout<<"Enter the size of array"<<endl;
    cin>>size; 
    for(int i=0; i<size; i++){
        cin>>group[i];
    }
   cout<<"the sum of each array of element is "<< SumofArray(group, size);
    return 0;
}