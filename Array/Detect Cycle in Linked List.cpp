#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

bool hasCycle(Node* head){

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head;

    if(hasCycle(head)){
        cout << "Cycle Detected";
    }
    else{
        cout << "No Cycle";
    }

    return 0;
}