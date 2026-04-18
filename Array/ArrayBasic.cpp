// #include<iostream>
// using namespace std;

// int main(){
    
//     int arr[] = {1,3,5,7,9};
//     cout<< arr[0] <<endl;
    
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<< " ";
//     }
    
//     return 0; 
// }


// Here is small issue that is we must need to give the all the input value same as the size of array//

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10];
//     cout<<"Take the input from the user for the array"<<endl;
    
//     for(int i=0; i<10; i++){
//         cin >> arr[i] ;
//     }
    
//     for(int i=0; i<10; i++){
    
//         cout<<arr[i]<<" "<<endl;
//     }
//     cout<<"all the array value get printed"<<endl;
// }


#include<iostream>
using namespace std;

int main()
{
    int barray[10];
    int n;

    cout << "How many numbers you want to enter (max or min 10): ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> barray[i];
    }

    // Printing output
    for(int i = 0; i < n; i++){
        cout << barray[i] << " ";
    }
}