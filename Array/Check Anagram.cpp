#include<iostream>
#include<algorithm>
using namespace std;

bool isAnagram(string a, string b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main(){
    cout << isAnagram("listen", "silent");
}