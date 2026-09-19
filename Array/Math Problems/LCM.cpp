//lcm

#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a >  b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a == 0)return b;
    return a;
}

int lcm(int a, int b){
    int ans = (a*b) / gcd(a,b);
    return ans;   
}

int main(){
    int a=20;
    int b=28;

    int ans = lcm(a,b);
    cout<<ans;

    return 0;
}