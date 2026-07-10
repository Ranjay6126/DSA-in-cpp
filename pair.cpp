#include <iostream>
#include <vector>
using namespace std;

void findPairs(vector<int>arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
        
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    cout << "Pairs with" << endl;
    findPairs(arr);

    return 0;
}
