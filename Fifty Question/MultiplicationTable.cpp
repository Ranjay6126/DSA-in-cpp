#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Take the input from the user";
    cin>>n;

    for(int i=1; i<=10; i++){

       int table = n*i;
        cout<< n << "*" << i << " = "<< table << endl;
    }
    
    return 0;
}