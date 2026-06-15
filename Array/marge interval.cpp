#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    for(auto interval : intervals) {

        if(ans.empty() || ans.back()[1] < interval[0])
            ans.push_back(interval);
        else
            ans.back()[1] = max(ans.back()[1], interval[1]);
    }

    return ans;
}

int main() {
    vector<vector<int>> v = {{1,3},{2,6},{8,10}};
    auto ans = merge(v);

    for(auto x : ans)
        cout << x[0] << " " << x[1] << endl;
}