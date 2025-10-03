#include<iostream>
using namespace std;

int sum(int array[], int n){
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum+ array[i];
    }
    return sum;
}

int main(){
    
    int n;
    cin>>n;
    
    int array[100];
    
    for(int i=0; i<n; i++){
        
        cin>>array[i];
    }
    cout<<"the sum value of entrie array is " << sum(array,n)<<endl;
    
}