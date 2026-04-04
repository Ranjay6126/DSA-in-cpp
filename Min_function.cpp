
#include<iostream>
using namespace std;

int MinofTwo(int a, int b){
    if(a < b){
        return a;
    } else{
        return b;
    }
}

int main(){

   cout<< "min =" << MinofTwo(23,22) << endl;
    
    return 0;
}