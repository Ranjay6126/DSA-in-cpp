
// int smallest = + ∞ = INT_MAX 

#include<iostream>
using namespace std;

int main(){
  
   int num[] = { 4,40,78,-24,-90};
   int size = 5;
   
    int smallest = INT_MIN;
   
   for(int i=0; i<size; i++){
       if(num[i] < smallest){
           smallest = num[i];
       }
   }
   cout<< "Smallest number is :" << endl;
   return 0;
}