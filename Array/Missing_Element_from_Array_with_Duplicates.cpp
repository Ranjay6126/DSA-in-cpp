#include<iostream>
#include<cstdlib>
using namespace std;

void FindMissing(int *a, int n){

    // Visited method
    for(int i = 0; i < n; i++){

        int index = abs(a[i]);

        if(a[index - 1] > 0){
            a[index - 1] *= -1;
        }
    }

    // Print modified array
    cout << "Modified Array: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    // Positive indexes are missing
    cout << "Missing Elements: ";
    for(int i = 0; i < n; i++){

        if(a[i] > 0){
            cout << i + 1 << " ";
        }
    }
}

int main(){

    int a[] = {1,3,3,3,3};

    int n = sizeof(a) / sizeof(int);

    FindMissing(a, n);

    return 0;
}