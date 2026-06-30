#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    pair<int, int> p ={11,33};
        cout<< p.first <<" ";
        cout<< p.second <<endl;

    pair<string, int> s = {"Ram", 50};

    pair<int, pair<char, int>> parryofpair = {1,{'a', 3}};

     cout<<s.first<< endl;
     cout<<p.second<< endl;

     cout<<parryofpair.first<<endl;
     cout<<parryofpair.second.first<<endl;
     cout<<parryofpair.second.second<<endl;

     vector<pair<int,int>>vec = {{1,2},{2,3},{3,4}};

     for(auto p: vec){
        cout<< p.first << " "<< p.second<<endl;
     }


    return 0;
}

