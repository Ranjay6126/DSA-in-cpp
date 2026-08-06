class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto c : strs){
            string curr = c;
            sort(c.begin(), c.end());
            mp[c].push_back(curr);
        }
        vector<vector<string>>ans;
        for( auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};