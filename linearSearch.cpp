
#include<iostream>
using namespace std;

int main(){
   int Arr [] = {3,5,7,9,0,2,1};
    int size = 7;
    int target = 1;
    
    for(int i=0; i<size; i++){
        if(Arr[i] == target){
            cout<< i  << endl;

        }
    }
    
    return -1;
    
}