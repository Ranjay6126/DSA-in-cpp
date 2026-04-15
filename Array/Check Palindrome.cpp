#include<iostream>
using namespace std;

bool isPalindrome(string str){
    int s = 0, e = str.length()-1;

    while(s < e){
        if(str[s] != str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){
    string str = "madam";
    cout << isPalindrome(str);
}