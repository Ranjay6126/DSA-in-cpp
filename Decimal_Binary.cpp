#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Take the input from the user: ";
    cin >> n;

    int ans = 0;
    int base = 1;

    while(n != 0) {
        int bit = n & 1;
        ans += bit * base;
        base *= 10;
        n = n >> 1;
    }

    cout << "Answer is " << ans << endl;
}


/*
#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Take the input from the user: ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "Answer is " << ans << endl;
} 
    
*/
