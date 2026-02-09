#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* segregate(Node* head) {
    int c0 = 0, c1 = 0, c2 = 0;
    Node* Temp = head;

    while(Temp){
        if(Temp -> data == 0){
            c0++;
        }
            else if(Temp -> data == 1){
                c1++;
            }
            else {
                c2++;
            }
            Temp = Temp -> next;
        }

        Temp = head;

        while(Temp){
            if(c0){
                Temp -> data = 0;
                c0--;
            }
            else if(c1){
                Temp -> data = 1;
                c1--;
            }
            else{
                Temp -> data = 2;
                c2--;
            }
            Temp = Temp -> next;
        }
        return head;
}

int main() {

    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(0);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(0);

    head = segregate(head);

    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
