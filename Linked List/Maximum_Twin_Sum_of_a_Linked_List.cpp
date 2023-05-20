// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/

/*

Approach 1:   TC -> O(n)  SC -> O(1)
Use slow and fast pointer to get the mid and then reverse the remaining list and then traverse both list and get maximum sum.

Approach 2:   TC -> O(n)  SC -> O(n)
Traverse the list and store the elements in a vector array or in a stack and then traverse the original list and the vector or the stack at same time and get the maximum sum. Traverse the list till the mid.

*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node*&head, Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = tail->next;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Approach 1
int maxTwinSum(Node* head){
    int maximum = 0;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* prev = NULL;
    Node* next = NULL;
    // list reversed
    while(slow != NULL){
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }
    slow = head;
    while(prev != NULL){
        maximum = max(maximum, slow->data + prev->data);
        prev = prev->next;
        slow = slow->next;
    }
    return maximum;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 4);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 1);
    print(head);

    cout << maxTwinSum(head);       // TC -> O(n)  SC -> O(1)
    
    return 0;
}