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

Node *deleteNode(Node *head, int x){
    if(head == NULL) return head;

    if(x == 1){
        Node *temp = head;
        head = head -> next;
        delete temp;
        return head;
    }

    Node *curr = head;
    for(int i = 1; i < x - 1 && curr != NULL; i++){
        curr = curr -> next;
    }

    while(curr == NULL || curr -> next == NULL){
        return head;
    }

    Node *temp = curr -> next;
    curr -> next = curr -> next -> next;
    delete temp;

    return head;
}

void print(Node *head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main(){

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head = deleteNode(head, 1);

    print(head);

    return 0;
}