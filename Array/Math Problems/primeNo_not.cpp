#include<iostream>
using namespace std;

int isprime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cout<<"take input"<<endl;
    cin>>n;

    for(int i=2; i<=n; i++){
        if(isprime(i)){
            cout<<i<<endl;
        }   

    }

    return 0;

}


// Sieve of Eratosthenes  
  
class Solution {  
public:  
    int countPrimes(int n) {  
    
        vector<bool>isPrime(n+1, true); 
        isPrime[0] = false;
        isPrime[1] = false;

        for (long long p = 2; 1ll * p * p <= n; p++) {
            if (isPrime[p] == true) {
            
            // marking as false
                for (long long i = 1ll * p * p; i <= n; i += p)
                    isPrime[i] = false;
                }
        }
        
        int count = 0;  
        
        for(int i=2; i<n; i++){  
  
            if(isPrime[i]){  
                count ++;   
            }  
              
        }  
        return count;  
    } 

};