#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> age;

    age["Ranjay"] = 22;
    age["Aman"] = 21;

    cout << age["Ranjay"];

    return 0;
}