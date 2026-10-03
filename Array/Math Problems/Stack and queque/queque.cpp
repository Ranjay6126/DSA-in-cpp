class Queue {
    int arr[100];
    int frontIndex;
    int rear;

public:

    Queue() {
        frontIndex = 0;
        rear = -1;
    }

    void push(int x) {
        if(rear == 99) {
            cout << "Queue Overflow";
            return;
        }

        arr[++rear] = x;
    }

    void pop() {
        if(frontIndex > rear) {
            cout << "Queue Underflow";
            return;
        }

        frontIndex++;
    }

    int front() {
        if(frontIndex > rear)
            return -1;

        return arr[frontIndex];
    }
};