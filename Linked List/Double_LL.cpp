#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    // inserting at start
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    // inserting at middle anywhere
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
    temp->next->prev = nodeToInsert;

}

void deleteNode( Node* &head, int position){
    if(position == 1){
        Node* temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
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

int getLength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 11);
    print(head);

    insertAtTail(tail, 24);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);
    
    insertAtPosition(head, tail, 1, 101);
    print(head);
    
    insertAtPosition(head, tail, 6, 102);
    print(head);

    deleteNode(head, 4);
    print(head);
    

    cout << "Length of Double LL is " << getLength(head);
    return 0;
}