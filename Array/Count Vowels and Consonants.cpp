#include<iostream>
using namespace std;

int main(){
    string str = "hello";
    int vowel = 0, consonant = 0;

    for(char ch : str){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        } else {
            consonant++;
        }
    }

    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant;
}