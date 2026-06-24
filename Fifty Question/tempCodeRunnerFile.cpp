#include<iostream>
using namespace std;

int main(){

int n; 
cout<<"Take the input from the user";
cin>>n;
for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
        cout<<" ";
    }
    for(int j=0; j<n-1; j++){
        cout<< i+1;
    }
    cout<<endl;
}
    return 0;
}