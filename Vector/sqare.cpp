// squre of number 

#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>> a >> b;
    
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans*a;
    }
    cout<<ans<<endl;
    
}
