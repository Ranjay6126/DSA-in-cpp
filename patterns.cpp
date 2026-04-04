// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"take the input from the user"<<endl;
//     cin>>n;

//     for(int i=1; i<=n; i++){

//         for(int j=1; j<=n; j++){

//             cout<< "*" ;

//         }
//         cout<< endl;
//     }

//     return 0;
// }



// 4
// ****
// ****
// ****
// ****





// #include<iostream>
// using namespace std;

// int main(){

//  int num;
//  cout<<"Take the input from the user"<<endl;
//  cin>> num;

//  for(int i=0; i<=num; i++){
    
//     for(int j=1; j<=num; j++){
//         cout<< j << " ";

//     }
//     cout<<endl;
//  }


//     return 0;

// }



// output:=> 4
// 1234
// 1234
// 1234
// 1234




// #include<iostream>
// using namespace std;

// int main(){
    
//     int n ;
//     cout<<"Take the input form the user";
//     cin>> n;

//     for(int i=0; i<n ; i++){
        
//         char ch = 'A';
//         for(int j=0; j<n; j++){
            
//             cout<< ch ;
//             ch++;
//         }

//         cout<<endl;
//     }
// }


// Take the input form the user4
// ABCD
// ABCD
// ABCD
// ABCD






// Square Pattern


/*
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int num = 1;

    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout<< num;
            num++;
        }

        cout<<endl;
    }

    return 0;

}

3
123
456
789    */





// #include<iostream>
// using namespace std;

// int main(){

//     char ch='A';
//     int n;
//     cin>>n;

//     for(int i=0; i<=n; i++){

//         for(int j=0; j<=n; j++){
//             cout<< ch;
//             ch++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// 2
// ABC
// DEF
// GHI




// Triangle Patterns

// #include <iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;

//     for(int i=0; i<n ; i++){

//         for(int j=0; j<=i; j++){

//             cout<<"*"<< " ";
//         }
//        cout<<endl;
//     }
// }

// 5
// * 
// * *
// * * *
// * * * *
// * * * * *





// #include<iostream>
// using namespace std;

// int main(){

   

//     int n;
//     cin>> n;

//     for(int i=0; i<n; i++){
      

//         for(int j=0; j<i+1 ; j++){

//             cout<< i+1;


//         }
//         cout<<endl;
//     }
// }
// 4
// 1
// 22
// 333
// 4444





// Triangle Pattern 

// #include<iostream>
// using namespace std;

// int main(){

// int n; 
// cin>>n;

// for(int i=0; i<n; i++){

//     for(int j=1; j<=i+1; j++){

//        cout<< j;

//     }
// cout<< endl;
// }
// }


// 5
// 1
// 12
// 123
// 1234
// 12345




//Revese triangel pattern

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){

//         for(int j=i+1; j>0; j--){

//             cout<< j << " ";

//         }
//         cout<<endl;
//     }
// return 0;
// }

// 4
// 1 
// 2 1
// 3 2 1
// 4 3 2 1



// Floyd's Triangle Pattern


// #include<iostream>
// using namespace std;

// int main(){

//     int num = 1; 

//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){

//         for(int j=0; j <i+1; j++){

//             cout<< num; 
//             num++;

//         }
//         cout<<endl;
//     }

//     return 0;
// }


// 4
// 1
// 23
// 456
// 78910




// for the alphabed Floyd's Triangle Pattern


// #include<iostream>

// using namespace std;

// int main(){

//     char ch = 'A';
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){

//         for(int j=0; j<i+1; j++){

//             cout<< ch; 
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 4
// A
// BC
// DEF
// GHIJ





// inverted Triangle Pattern 


#