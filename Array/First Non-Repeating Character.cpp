#include<iostream>
using namespace std;

int main(){
    string str = "swiss";
    int freq[26] = {0};

    for(char ch : str){
        freq[ch - 'a']++;
    }

    for(char ch : str){
        if(freq[ch - 'a'] == 1){
            cout << ch;
            break;
        }
    }
}