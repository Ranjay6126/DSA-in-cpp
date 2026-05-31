#include<iostream>
#include<queue>
using namespace std;

class Stack {
    queue<int> q;

public:

    void push(int x) {

        q.push(x);

        for(int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if(q.empty()) {
            cout << "Stack is Empty" << endl;
            return;
        }

        q.pop();
    }

    int top() {
        if(q.empty()) {
            return -1;
        }

        return q.front();
    }
};

int main() {

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top Element: " << st.top() << endl;

    st.pop();

    cout << "Top After Pop: " << st.top() << endl;

    return 0;
}