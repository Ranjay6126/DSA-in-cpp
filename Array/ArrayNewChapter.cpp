// #include <iostream>
// using namespace std;

// int main()
// {

//     // Array Declartion

//     int arr[5];

//     char arry[106];
//     bool array1[23];

//     // this two line referce to the same first address
//     //Of memory location // base address

           
//     cout<< arr << endl;
//     cout << &arr << endl;

//     cout << "all this good" << endl;
//     return 0;
// }




#include<iostream>
using namespace std;
int main(){
    // Array initialization
    
    //1st way
    int array [] = {2,4,6,8,12};
    
    //2nd ways 
    int barray[5] = {11,22,33,44,55};
    
    cout<<array[1]<<endl;
    
    cout<<barray<<endl; // address
    cout<<barray[0]<<endl;
    cout<<barray[1]<<endl;
    cout<<barray[2]<<endl;
    
    
    cout<<"all this good"<<endl;
    return 0;
}

