#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1,2,3,1,2,4,5};
    int n = 7;

    unordered_set<int> st;

    for(int i=0;i<n;i++)
        st.insert(arr[i]);

    cout << st.size();

    return 0;
}