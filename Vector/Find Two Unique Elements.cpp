#include <iostream>
#include <vector>
using namespace std;

void findTwoUnique(vector<int>& vec) {
    int xorAll = 0;

    for (int i = 0; i < vec.size(); i++) {
        xorAll ^= vec[i];
    }

    int setBit = xorAll & (-xorAll);

    int num1 = 0, num2 = 0;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] & setBit)
            num1 ^= vec[i];
        else
            num2 ^= vec[i];
    }

    cout << "Unique elements: " << num1 << " " << num2 << endl;
}