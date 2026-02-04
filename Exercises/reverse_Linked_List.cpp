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

Node *reverseLL(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    Node *next;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

void print(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << "NULL";
}


int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);

    cout << "Original: ";
    print(head);

    head = reverseLL(head);

    cout << endl;

    cout << "Reversed: ";
    print(head);

    return 0;
}