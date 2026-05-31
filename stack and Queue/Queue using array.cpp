#include<iostream>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int data) {
        if(rear == size) {
            cout << "Queue Overflow" << endl;
            return;
        }

        arr[rear] = data;
        rear++;
    }

    void dequeue() {
        if(front == rear) {
            cout << "Queue Underflow" << endl;
            return;
        }

        front++;
    }

    int getFront() {
        if(front == rear) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return arr[front];
    }
};

int main() {

    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front Element: " << q.getFront() << endl;

    q.dequeue();

    cout << "Front After Dequeue: " << q.getFront() << endl;

    return 0;
}