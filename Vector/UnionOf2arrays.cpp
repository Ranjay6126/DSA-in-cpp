#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>ans;

    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    int barr[] = {10,20,30,40};
    int size1 = 4; 

    for(int i=0; i<size; i++){
          ans.push_back(arr[i]);
    }

    for(int i=0; i<size1; i++){
        ans.push_back(barr[i]);
    }

    //printing the union
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}