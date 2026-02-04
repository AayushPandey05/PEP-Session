#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node() {
        data = 0;
        next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

vector<int> printList(Node *head) {
    vector<int> res;
        
    Node *temp = head;
    while(temp != NULL){
        res.push_back(temp->data);
        temp = temp->next;
    }
    return res;
}

int main() {
    // Create linked list: 10 -> 20 -> 30 -> NULL
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Call function
    vector<int> ans = printList(head);

    // Print result
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}
