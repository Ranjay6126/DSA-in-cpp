#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    bool isPrime = 1;    // we can also write true or false in place of Zero

    if (n < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 0)
    {
        cout << "The entered Number is Not a Prime Number" << endl;
    }
    else
    {
        cout << "The entered Number is a Prime Number" << endl;
    }

    return 0;
}







///--------------------------After the continue the remain Parts are Remain Unreachable --------------------------------------------///


/*
#include<iostream>
using namespace std;

int main() {
    
    for(int i=0; i<5; i++){
        
        cout<<"Hello "<<endl;
        cout <<"Hi I am here "<<endl;
        
        continue;
        
        cout<<"After the continue remain parts are unreachable"<<endl;
        
    }
}
*/

