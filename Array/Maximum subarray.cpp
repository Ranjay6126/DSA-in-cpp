#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int curr = nums[0];
    int best = nums[0];

    for(int i=1;i<nums.size();i++) {
        curr = max(nums[i], curr + nums[i]);
        best = max(best, curr);
    }

    return best;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);
}