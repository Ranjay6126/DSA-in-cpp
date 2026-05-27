#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int findKthLargest(vector<int>& nums, int k){

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i=0; i<nums.size(); i++){

        minHeap.push(nums[i]);

        if(minHeap.size() > k){
            minHeap.pop();
        }
    }

    return minHeap.top();
}

int main(){

    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;

    cout << findKthLargest(nums, k);

    return 0;
}