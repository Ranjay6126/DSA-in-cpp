#include<iostream>
#include<vector>
using namespace std;

void Sort(vector<int>& arr){
    
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while(start <= end){

        // if 0 found -> move to left
        if(arr[i] == 0){
            swap(arr[start], arr[i]);
            start++;
            i++;
        }

        // if 1 found -> move to right
        else{
            swap(arr[i], arr[end]);
            end--;
        }
    }

    // print array
    for(auto value : arr){
        cout << value << " ";
    }
}

int main(){

    int n;

    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of vector:" << endl;

    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    Sort(arr);

    return 0;
}