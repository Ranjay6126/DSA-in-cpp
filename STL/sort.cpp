#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int arr[] = {1, 34, 66, 2, 66, 88, 24};
    int size = 7;

    sort(arr, arr + size);

    for (auto a : arr) {
        cout << a << " ";
    }

    cout << endl;
    return 0;
}



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {1, 34, 66, 2, 66, 88, 24};

    sort(v.begin(), v.end());

    for (auto x : v) {
        cout << x << " ";
    }
}