Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* nextPtr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextPtr;
    }

    return prev;
}