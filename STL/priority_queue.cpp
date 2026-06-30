#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> q;

    q.push(4);
    q.push(8);
    q.push(12);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<< endl;
    return 0;

}
