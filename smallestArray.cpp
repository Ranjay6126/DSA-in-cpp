// find smallest / largest in array
// int smallest = +∞ (largest possible values) , INT_MAX => plus infinity

#include<iostream>
#include<climits>  // Include this header file for INT_MAX
#include<algorithm>  // Include this header for max() function

using namespace std;
int main(){
    int nums[] = {5, 15, 22, 1, -14, 24};
    int size = 6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0; i < size; i++){
        // Find the smallest element
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        // Use max() to find the largest number in the array
        largest = max(nums[i], largest);
    }

    cout << "Smallest element in the array is  " << smallest << endl;
    cout << "Largest element in the array is  " << largest << endl;

    return 0;
}
