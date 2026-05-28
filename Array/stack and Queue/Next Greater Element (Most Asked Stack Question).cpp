#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {

    int n = arr.size();

    vector<int> ans(n);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {

        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(st.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    return ans;
}

int main() {

    vector<int> arr = {2, 1, 4, 3};

    vector<int> ans = nextGreaterElement(arr);

    cout << "Next Greater Elements: ";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}