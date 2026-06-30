
#include <iostream>

#include<bits/stdc++.h>

using namespace std;

int main(){

    deque<int>d ={1,2,3,4,5};

    cout<<d[2]<<endl;

    for(auto val : d){
        cout << val <<" ";
    }

    return 0;
}
