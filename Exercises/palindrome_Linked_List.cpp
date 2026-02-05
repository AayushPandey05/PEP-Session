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

bool isPalindrome(Node *head){
    Node *temp = head;

    stack<int> st;
    while(temp != NULL){
        st.push(temp -> data);
        temp = temp -> next;
    }

    while(head != NULL){
        int curr = st.top();
        st.pop();

        if(head -> data != curr){
            return false;
        }
        head = head -> next;
    }

    return true;
}

int main(){
    Node *head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(1);

    if(isPalindrome(head)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    
    return 0;
}