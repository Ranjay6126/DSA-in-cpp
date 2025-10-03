// #include<iostream>
// using namespace std;

// int main(){
    
//     int num[5] = {0};
    
//     int value = 5;

//     for(int i=0; i<5; i++){

//          num[i] = value;
//          cout<< num[i] << " ";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

//     int array[6] = {0};
//     for(int i=0; i<6; i++){
//         cout<<array[i]<<" ";

//     }
//     return 0;

// }



#include <iostream>
using namespace std;

int main(){

    // int second[3] = {5, 7, 11};

    // cout<<"access the second item from the array is "<<second[2] <<endl;


    int third[15] = { 12, 25};

    int n =15;

    cout<<"Printing the array"<<endl;

    for(int i=0; i<n; i++){

        cout<< third[i]<<" ";

    }


    
    //____________________________________________________________


    int fourth[10] = {0};

    int b = 10;

    cout<< endl << "the value of all the array in fouth array is "<< endl;

    for(int i=0; i<b; i++){
        cout<< fourth[i] <<" ";
    }

    //__________________________________________________________


    int fifth[5];

    int value = 5;

     cout<<"the value will print will be one only"<<endl;

    for(int i=0; i<n; i++){

     fifth[i] = value;   // Have a look 

    cout<< fifth[i]<<" ";
   

    }
}


