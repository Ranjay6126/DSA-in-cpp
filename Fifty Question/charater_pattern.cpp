#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<n ; i++){ //outer loop // row 
    
        char ch = 'A';
        for(int j=0; j<n; j++){ // inner loop for coln;
            cout<<ch;
            ch = ch+1;
            
        }
        cout<<endl;
    }
}