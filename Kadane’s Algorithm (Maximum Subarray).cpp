#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<n; i++){
        currSum += arr[i];

        if(currSum > maxSum)
            maxSum = currSum;

        if(currSum < 0)
            currSum = 0;
    }
    return maxSum;
}