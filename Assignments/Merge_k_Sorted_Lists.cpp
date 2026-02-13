#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;

    Node(int x){
        val = x;
        next = NULL;
    }
};

Node* mergeTwo(Node* a, Node* b){
    if(a == NULL) {
        return b;
    }
    if(b ==  NULL){
        return a;
    }
    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while(a && b){
        if(a -> val <= b -> val){
            tail -> next = a;
            a = a -> next;
        }
        else{
            tail -> next = b;
            b = b -> next;
        }
        tail = tail -> next;
    }

    if(a) {
        tail -> next = a;
    }

    else {
        tail -> next = b;
    }

    return dummy -> next;
}

Node* mergeK(vector<Node*>& lists, int l, int r){
    if(l > r) {
        return NULL;
    }
    if(l == r) {
        return lists[l];
    }

    int mid = (l + r) / 2;

    Node* left = mergeK(lists, l, mid);
    Node* right = mergeK(lists, mid + 1, r);

    return mergeTwo(left, right);
}

Node* mergeKLists(vector<Node*>& lists) {
    if(lists.size() == 0) {
        return NULL;
    }
    return mergeK(lists, 0, lists.size() - 1);
}

int main() {

    int k;
    cin >> k;

    vector<Node*> lists(k, NULL);
    
    for(int i = 0; i < k; i++){

        int n;
        cin >> n;

        Node* head = NULL;
        Node* tail = NULL;

        for(int j = 0; j < n; j++){
            int x;
            cin >> x;

            Node* newNode = new Node(x);

            if(head == NULL){
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
        }

        lists[i] = head;
    }

    Node* res = mergeKLists(lists);

    while(res != NULL){
        cout << res->val << " ";
        res = res->next;
    }

    return 0;
}
