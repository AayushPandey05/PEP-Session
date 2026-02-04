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

Node *middleOfLL(Node *head){
    if(head == NULL){
        return head;
    }

    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next; // move only one step forward at a time
        fast = fast -> next -> next; // move two steps forward at a time;
    }

    return slow;
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

    head = middleOfLL(head);

    print(head);

    return 0;
}