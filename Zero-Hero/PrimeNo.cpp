#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false; // Not prime if divisible
            break;
        }
    }
    return true; // Prime if no divisors found
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(isPrime(n)){
        cout << "The given number is a prime number 😍" << endl;
    } else {
        cout << "The given number is not a prime number." << endl;
    }

    return 0;
}
