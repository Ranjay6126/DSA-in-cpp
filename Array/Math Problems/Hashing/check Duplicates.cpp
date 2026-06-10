#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,2};
    int n = 5;

    unordered_set<int> st;

    for(int i=0;i<n;i++) {
        if(st.find(arr[i]) != st.end()) {
            cout << "Duplicate Found";
            return 0;
        }
        st.insert(arr[i]);
    }

    cout << "No Duplicate";

    return 0;
}