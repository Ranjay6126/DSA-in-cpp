#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};

    vec.erase(vec.begin());

    //value at index 2
    vec.erase(vec.begin() + 2);

 cout<<endl;

    vec.insert(vec.begin()+2, 100);

    cout<<endl;

     for(int val : vec){
        cout<<val;
    }

    vec.clear();
     cout<<endl;

    cout<<"the size of vector is"<< vec.size();
     cout<<endl;
    cout<<"the capcity of vector is"<<vec.capacity();
     cout<<endl;

    cout<<"is empty"<<vec.empty();

   

    return 0;
}