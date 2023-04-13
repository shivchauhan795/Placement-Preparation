#include <bits/stdc++.h>
using namespace std;

// Node Implemented
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};

void insertAtHead(Node* &head, int d){
    
    // Creating new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    // Creating new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* & head, Node* &tail, int position, int d){
    // inserting at start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // creating node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int position, Node* &head, Node* &tail){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // Memory free krwadi
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

        // Below if condition only handles tail
        if(prev->next == NULL){
            tail = prev;
        }
        // Memory free krwadi
        curr->next = NULL;
        delete curr;
    }
}


// traversing or printing
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;   
}

int main()
{
    // created new node
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    // tail pointed to node1
    Node* tail = node1;

    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 13);
    print(head);
    
    deleteNode(4, head, tail);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}