
// #include<iostream>
// using namespace std;

// void Swap_Alternate(int array[], int size){

//     for(int i=0; i<size; i=i+2){

//         if(i+1 < size){
//             swap(array[i], array[i+1]);
//         }
//     }
// }


// int main(){

//     int size ;
//     cout<<"Enter the size of array"<<endl;
//     cin>>size;

//     int array[100];

//     cout<<"enter the element of array"<<endl;
//     for(int i=0; i<size; i++){
//         cin>> array[i];
//     }

//     Swap_Alternate(array, size);

//     cout<<"the swap alternate array is "<<endl;

//     for(int i=0; i<size ; i++){
//         cout<< array[i] <<" ";
//     };

//     return 0;

// }


#include<iostream>
using namespace std;

void PrintArray(int arr [], int size){

    for(int i = 0; i<size; i++){

        cout<< arr[i] <<" ";
    }
    cout<< endl;

}


void Swap_Alternate(int arr[], int size){

for(int i=0; i<size; i+=2){

if(i+1 < size){
    swap(arr[i], arr[i+1]);
}

}
    
}


int main(){

    int even[10] = {11 ,22, 33 ,44 ,55 ,66 ,77, 88 , 99 ,10};

    int odd[5] = {1 ,3, 5 ,7 ,9};


     Swap_Alternate(even, 10);
     PrintArray(even, 10);

     Swap_Alternate(odd, 5);
     PrintArray(odd, 5);


}