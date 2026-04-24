#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    arr.push_back(10);
    arr.push_back(5);    

     for(int i=0; i < arr.size(); i++){
       cout<<arr[i]<<" ";
     }
     cout<<endl;

      arr.pop_back();

      cout<<arr[1]<<endl;

      // vector<int>brr(10);
      //  vector<int>brr(10,-1);
      // vecotr<int> crr{10,20,30};
      int n;
      cout<<"Enter the value of n"<<endl;
      cin>>n;
      vector<int>brr(n,-101);
      cout<<"size of b "<< brr.size()<<endl;
      cout<<"capacity of b "<<brr.capacity()<<endl;

      for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<< " ";
      }
      cout<< endl;
      return 0;
    }