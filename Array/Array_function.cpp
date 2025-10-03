#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){

    cout<<"Printing the array"<<endl;

    for(int i=0; i<size; i++){

        cout<< arr[i] << " ";
    }

   cout<<"Printing DONE"<<endl;

}

int main(){

    int first[15] = {2,7};

    int a = 15;

    // PrintArray(first, 15);



    int sizeoffirst = sizeof(first)/sizeof(int);

    cout<< "the size of first is "<< sizeoffirst <<endl;



    int second[10] = {0};
    
    int b = 10;

    // PrintArray(second, 10);

    int third[5] = {1};

    int c = 5;

    // PrintArray(third, 5);


    char charecter[5] = {'a', 'b', 'c', 'd', 'e'};

    int z = 5;

    for(int i=0; i < z; i++){

        cout<< charecter[i] << " ";

    }
    

    return 0;
}
