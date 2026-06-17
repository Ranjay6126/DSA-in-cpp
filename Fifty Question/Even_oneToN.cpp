// for the odd no
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0; i<=n; i++){
        if(i%2 != 0){
            cout<< i << " ";
        }
    }

    return 0;
}

// for all the even no.


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
