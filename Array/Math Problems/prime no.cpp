#include<iostream>
using namespace std;

int main() {
    int n = 29;
    bool prime = true;

    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            prime = false;
            break;
        }
    }

    if(prime)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}