class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        
        unordered_map<int, int> mp;

        for(auto it : nums){
            mp[it]++;
        }  

        for(auto it : mp){
            cout<<it.first;
            cout<<" ";
            cout<<it.second;
        } 
        
        for( auto it : nums){
            if(mp[it] > size/2){
                return it;
            }
        }
        return -1;
    }
};