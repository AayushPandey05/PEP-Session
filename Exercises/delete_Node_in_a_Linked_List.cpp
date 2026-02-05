#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void deleteAnyNode(Node* &head, Node *nodeToDelete){
    if(head == NULL || nodeToDelete == NULL) return;

    // Case 1: deleting head node
    if(head == nodeToDelete){
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Find previous node
    Node *prev = head;
    while(prev->next != NULL && prev->next != nodeToDelete){
        prev = prev->next;
    }

    // If node not found
    if(prev->next == NULL) return;

    // Delete node
    prev->next = nodeToDelete->next;
    delete nodeToDelete;
}

void print(Node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node *head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(1);
    head->next->next->next = new Node(9);

    // delete node with value 9 (last node)
    Node *nodeToDelete = head->next->next->next;

    deleteAnyNode(head, nodeToDelete);
    print(head);

    return 0;
}
