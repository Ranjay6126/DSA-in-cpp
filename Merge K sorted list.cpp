#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

struct cmp {
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode*, vector<ListNode*>, cmp> pq;

    for(auto l : lists)
        if(l) pq.push(l);

    ListNode dummy(0), *tail = &dummy;

    while(!pq.empty()){
        ListNode* node = pq.top(); pq.pop();
        tail->next = node;
        tail = tail->next;
        if(node->next) pq.push(node->next);
    }
    return dummy.next;
}