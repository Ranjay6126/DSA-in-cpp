#include<iostream>
#include <list>
#include<vector>

using namespace std;

int main(){

    list<int>i;

    i.emplace_back(1);
    i.push_back(2);
    i.push_front(7);
    i.push_front(10);

    i.pop_back();
    i.pop_front();

    for(auto a : i){
        cout<<a<<" ";
    }

    return 0;
}