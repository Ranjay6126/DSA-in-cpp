#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int SIZE = 10;
    vector<int> table[SIZE];

public:
    void insert(int key) {
        int index = key % SIZE;
        table[index].push_back(key);
    }

    void display() {
        for(int i=0;i<SIZE;i++) {
            cout << i << ": ";

            for(int x : table[i])
                cout << x << " ";

            cout << endl;
        }
    }
};

int main() {
    HashTable ht;

    ht.insert(15);
    ht.insert(25);
    ht.insert(35);

    ht.display();

    return 0;
}