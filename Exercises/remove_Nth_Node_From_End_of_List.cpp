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

Node *removeNthFromEnd(Node *head, int n){
    Node *fast = head;
    Node *slow = head;

    // move fast n steps
    for(int i = 0; i < n; i++){
        fast = fast -> next;
    }

    // If fast become NULL then delete head
    if(fast == NULL){
        Node *deleteNode = head;
        head = head -> next;
        delete deleteNode;

        return head;
    }

    // move until fast reaches null
    while(fast -> next != NULL){
        fast = fast -> next;
        slow = slow -> next;
    }

    Node *deleteNode = slow -> next;
    slow -> next = slow -> next -> next;
    delete deleteNode;

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
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);

    head = removeNthFromEnd(head, 2);
    print(head);
    
    return 0;
}