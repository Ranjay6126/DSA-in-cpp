#include<iostream>
#include<set>
using namespace std;


int main(){

    set<int>s;

    s.insert(2);
    s.insert(5);
    s.insert(5);
    s.insert(6);

    for(auto a:s){
        cout<< a;
    }


    return 0;
}