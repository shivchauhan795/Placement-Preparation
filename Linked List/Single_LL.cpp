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

void InsertNode(Node* &head, int d){
    
    // Creating new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

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
    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    return 0;
}