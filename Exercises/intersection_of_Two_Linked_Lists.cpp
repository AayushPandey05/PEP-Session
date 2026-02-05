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

Node *getIntersectionNode(Node *headA, Node *headB){
    Node *a = headA;
    Node *b = headB;

    while(a != b){
        if(a == NULL){
            a = headB;
        }
        else {
            a = a->next;
        }

        if(b == NULL) {
            b = headA;
        }
        else {
            b = b->next;
        }
    }

    return a; 
}

int main(){

    Node *common = new Node(8);
    common->next = new Node(10);

    Node *headA = new Node(1);
    headA->next = new Node(3);
    headA->next->next = new Node(5);
    headA->next->next->next = common;

    Node *headB = new Node(2);
    headB->next = new Node(4);
    headB->next->next = common;

    Node *ans = getIntersectionNode(headA, headB);

    if(ans == NULL){
        cout << "No Intersection";
    }

    else{
         cout << "Intersection at node with value: " << ans -> data;
    }

    return 0;
}
