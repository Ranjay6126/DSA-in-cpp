// // if positive negative and Zero

// #include<iostream>
// using namespace std;

// int main(){

//     int n;

//     cout<<"Take the input from the user "<<endl;

//     cin>> n;

//     if(n>0){
//         cout<<"the given number is Positive "<<endl;
//     }
//     else if(n < 0){
//         cout<<"the given number is Negative "<< endl;
//     }

//     else{
//         cout<<"the given number is Zero"<<endl;
//     }

//     return 0;
// }

// How to take input  the space // enter and tab By using cin.get || Tab value is 9

/*#include<iostream>
using namespace std;


int main(){

    int a;
    a = cin.get();
    cout<<"Value of a is"<< a<< endl;

return 0;
}*/

// OUTPUT Quesition

/*
#include <iostream>
using namespace std;

int main(){

    int a = 9;
    if( a == 9){
        cout << "NINEY"<<endl;
    }

    if(a > 0){
        cout<<"Positive";

    }

    else {
        cout<<"negatiave ";
    }

    return 0;
}
*/

/*#include<iostream>
using namespace std;

int main(){

    int a=2 ;
    int b = a+1;

    if((a=3) ==b){
        cout<<a;
    }

    else{
        cout<< a+1;
    }
} */

// OUTPUT = > 3

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 24 ;

//     if( a > 20 ){
//         cout << "LOVE"<<endl;
//     } else if( a == 24){
//         cout<<"Lovely"<<endl;
//     }else{
//         cout<<"Babbar"<< endl;
//     }

//     cout<< a;
// }

// Qustion for lower case // uper case // number // special char

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "The given character is lowercase." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The given character is uppercase." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "The given character is a number." << endl;
    }
    else
    {
        cout << "The given character is a special character." << endl;
    }

    return 0;
}

