#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

int main(){

    stack<int>s;

    s.push(11);
    s.push(22);
    s.push(33);

    stack<int>s1;

    s1.swap(s);

    cout<< " s size :"<< s.size()<<endl;// 0
    cout<< " s size : "<<s1.size()<<endl;// 3
    

    cout<<"top ="<<s.top()<<endl;

    while(!s.empty()){
        cout<< s.top() <<endl;
        s.pop();
    }

    cout<<endl;

    return 0;
}