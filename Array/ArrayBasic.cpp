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


//Based on n we can take the input in the array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int barray[10];
//     int n;

//     cout << "How many numbers you want to enter (max or min 10): ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> barray[i];
//     }

//     // Printing output
//     for(int i = 0; i < n; i++){
//         cout << barray[i] << " ";
//     }
// }



// take input and print it double output of the given array

#include<iostream>
using namespace std;

int main(){

    int shere[10];
    int n;
    cout<<"Take the input from the user"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>shere[i];
    }

    for(int i=0; i<n; i++){
        cout<<shere[i]*2 << " ";
    }
}




// replace all the element of array with given 

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        arr[i] = 1; 
    }
    for(int i=0 ; i<5 ;i++){
        cout<<arr[i]<< " ";
    }
    
    return 0;
}