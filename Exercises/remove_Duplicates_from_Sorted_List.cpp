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

Node *removeDuplicate(Node *head){
    Node *curr = head;

    while(curr != NULL && curr -> next != NULL){
        if(curr -> data ==  curr -> next -> data){
            Node *temp = curr -> next;
            curr -> next = curr -> next -> next;

            delete temp;
        }
        else{
            curr = curr -> next;
        }
    }

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
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);

    head = removeDuplicate(head);
    print(head);

    return 0;
}