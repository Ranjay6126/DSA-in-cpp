#include<iostream>
#include<cmath>
using namespace std;


int main(){

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while( n != 0 ){

        int bit = n & 1;
        
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;

    }
    cout<<"Answer is"<< ans << endl;
    return 0;
}


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int i = 1; // Use a multiplier for base-10 place values

    while (n != 0){
        int bit = n & 1;
        ans = bit * i + ans;
        n = n >> 1;
        i *= 10; // Move to next decimal place
    }

    cout << "Answer is " << ans << endl;
    return 0;
}

*/