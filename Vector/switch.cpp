// SWITCH STATEMENT:

#include<iostream>
using namespace std;

int main() {
    int n = 1330;
    int hundred, fifty, twenty, one;

    hundred = n / 100;
    n = n % 100;

    fifty = n / 50;
    n = n % 50;

    twenty = n / 20;
    n = n % 20;

    one = n;

    // Use switch to print denominations one by one
    for (int i = 1; i <= 4; i++) {
        switch(i) {
            case 1:
                cout << "100 notes = " << hundred << endl;
                break;
            case 2:
                cout << "50 notes = " << fifty << endl;
                break;
            case 3:
                cout << "20 notes = " << twenty << endl;
                break;
            case 4:
                cout << "1 notes = " << one << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}

