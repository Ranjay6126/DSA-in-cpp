#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(10);

    vec.pop_back();

    for(int val : vec){
        cout<< val << " " ;
    }
cout<<endl;

// value at the index will access

cout<<vec[0]<<" ";  
// or
cout<<vec.at(2);

cout<<endl;
cout<<vec.front()<<" " ;
cout<<vec.back();

cout<<endl;

    cout<<"Size of vector" << vec.size()<<endl;
    cout<<vec.capacity();

    

    return 0;

}