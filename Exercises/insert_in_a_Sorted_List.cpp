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

Node *insertInList(Node *head, int key){

    Node *temp = new Node(key);

    if(head == NULL) return temp;

    if(head == NULL || key <= head -> data){
        temp -> next = head;
        return temp;
    }

    Node *curr = head;
    while(curr -> next != NULL && curr -> next -> data < key){
        curr = curr -> next;
    }

    temp -> next = curr -> next;
    curr -> next = temp;

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

    head = insertInList(head, 0);

    print(head);

    return 0;
}