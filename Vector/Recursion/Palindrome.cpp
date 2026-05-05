#include<iostream>
using namespace std;

bool palindrome(string &s, int start, int end){

}

int main(){
    string s;
    cin >> s;

    if(palindrome(s,0,s.size()-1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}