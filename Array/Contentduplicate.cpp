class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        int a = st.size();
        if(a == n){
            return false;
        } 
        return true;
        
    }
};