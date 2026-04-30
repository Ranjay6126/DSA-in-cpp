#include <iostream>
#include <vector>
using namespace std;


// Function to find unique element using XOR
int findUnique(const vector<int>& vec) {  // 👉 Means: “I promise I will not modify this vector”
    int ans = 0;
    for (int i = 0; i < vec.size(); i++) {
        ans ^= vec[i];   // cleaner XOR operation
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size" << endl;
        return 0;
    }

    vector<int> vec(n);

    cout << "Enter the elements" << endl;

    for (int i = 0; i < n; i++) {   // better than vec.size() here
        cin >> vec[i];
    }

    int result = findUnique(vec);

    cout << "The Unique element is " << result << endl;

    return 0;
}