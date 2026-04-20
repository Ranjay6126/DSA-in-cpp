#include<iostream>
#include <climits>
using namespace std;

int Max(int barray[], int size){
    int max = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(barray[i] > max){
            max = barray[i];
        }
    }
    return max;
}

int Min(int barray[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(barray[i]<min){
            min = barray[i];
        }
    }
    return min;
}

int main(){
    
    int barray[100];
    int size ;
    cout<<"take the input of size"<<endl;
    cin>>size;
    cout<<"Now enter the value of arrys"<<endl;
    
    for(int i=0; i<size; i++){
        cin>>barray[i];
    }
    
    
    cout<<"the max value is:" << Max(barray, size)<<endl;
    cout<<"the min value is: " <<  Min(barray, size)<<endl;
    
}