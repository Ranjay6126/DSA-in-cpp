
#include<iostream>
using namespace std;

int factorial(int n){
    
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    
    int nomin = factorial(n);
    int domin = factorial(r) * factorial(n-r);
    
    int ans = nomin / domin;   

    return ans ;
}

int main(){
    
    int n,r;
    cout<<"the given number of n and r are"<<endl;
    cin>>n>>r;
 
    int answer = nCr(n , r);

    cout<<"the value of nCr is"<< answer <<endl;

    return 0;

}