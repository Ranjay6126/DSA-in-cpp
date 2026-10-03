class MinStack {
    stack<int> st;
    stack<int> minSt;

public:

    void push(int x) {

        st.push(x);

        if(minSt.empty() || x <= minSt.top())
            minSt.push(x);
    }

    void pop() {

        if(st.top() == minSt.top())
            minSt.pop();

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};