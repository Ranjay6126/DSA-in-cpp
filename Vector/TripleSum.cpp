#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>brr{10,20,30,40,50,60,70,80};
int target = 80;

for(int i=0; i<brr.size(); i++){
    for(int j=i+1; j<brr.size(); j++){
        for(int k=j+1; k<brr.size(); k++){
            if(brr[i]+brr[j]+brr[k] == target){
                cout<<"triple sum is:"<<"("<<brr[i]<<","<<brr[j]<<","<<brr[k]<<")"<<endl;
            }
        }
    }
}
    
    return 0;
}