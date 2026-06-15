#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void levelOrder(Node* root) {

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {

        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}