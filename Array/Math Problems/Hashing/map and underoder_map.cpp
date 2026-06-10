#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<int, string> m;
    unordered_map<int, string> um;

    m[2] = "B";
    m[1] = "A";

    um[2] = "B";
    um[1] = "A";

    cout << "Map:\n";
    for(auto x : m)
        cout << x.first << " ";

    cout << "\nUnordered Map:\n";
    for(auto x : um)
        cout << x.first << " ";

    return 0;
}