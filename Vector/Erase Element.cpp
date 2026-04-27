#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    v.erase(v.begin() + 1); // remove index 1

    for(int x : v) {
        cout << x << " ";
    }
}