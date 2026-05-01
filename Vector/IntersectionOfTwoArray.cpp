#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int>arr{1,2,3,4,5,6,3,8};
    vector<int>brr{3,4,8,66, 3}; 
   
    vector<int>ans;

    for(int i=0; i<arr.size(); i++){
        // int element = arr[i];
       for(int j=0; j<brr.size(); j++){
        if(arr[i] == brr[j]){
            //mark to remove the repated // int min;  
            brr[j] = -1;
            ans.push_back(arr[i]);
        }
       }
    
    }
    //print ans
for(auto value : ans){
    cout<< value << " ";
}


    return 0;
}
