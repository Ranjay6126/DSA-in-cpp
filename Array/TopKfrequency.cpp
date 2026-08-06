class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // Count frequencies
        for (int num : nums) {
            mp[num]++;
        }

        // Store {number, frequency} pairs
        vector<pair<int, int>> freq(mp.begin(), mp.end());

        // Sort by frequency (descending)
        sort(freq.begin(), freq.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });

        // Get top k frequent elements
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};