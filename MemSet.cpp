#include <iostream>

#include <cstring>
using namespace std;

int main() {
    int arr[5];

    memset(arr, -1, sizeof(arr));

//     🔹 Important Concept (VERY IMPORTANT ⚠️)
// memset works byte-by-byte, not element-wise. It give some random value with 1 

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
} 

