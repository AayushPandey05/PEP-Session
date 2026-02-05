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

Node* mergeTwoLists(Node* list1, Node* list2){
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }

    if(list1 -> data <= list2 -> data){
        list1 -> next = mergeTwoLists(list1 -> next, list2);
        return list1; 
    }
    else{
        list2 -> next = mergeTwoLists(list2 -> next, list1);
        return list2;
    }
}

void print(Node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node *list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node *list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    Node *head = mergeTwoLists(list1, list2);
    print(head);

    return 0;
}

