#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* reverseKGroup(Node* head, int k) {

    if(head == NULL || k == 1) return head;

    Node dummy(0);
    dummy.next = head;
    Node* prev = &dummy;

    while(true){

        Node* temp = prev;
        for(int i = 0; i < k && temp; i++){
            temp = temp->next;
        }
        if(temp == NULL) break; // less than k nodes left

        Node* curr = prev->next;
        Node* nxt = curr->next;

        for(int i = 1; i < k; i++){
            curr->next = nxt->next;
            nxt->next = prev->next;
            prev->next = nxt;
            nxt = curr->next;
        }

        prev = curr;
    }

    return dummy.next;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    head = reverseKGroup(head, k);
    print(head);

    return 0;
}
