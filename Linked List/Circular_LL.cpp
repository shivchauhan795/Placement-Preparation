#include <bits/stdc++.h>
using namespace std;

// Circular LL mai head ki need nhi hai. Tail se hi sb access ho jayega.

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else{
        Node* curr = tail;
        // searching for the element
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value){
    // Empty List -> 0 Node
    if(tail == NULL){
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while (curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // 1 Node
        if(curr == prev){
            tail = NULL;
        }
        // >=2 Nodes
        else if(tail == curr){
            tail = curr->next;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &tail){
    Node* temp = tail;
    // Empty List
    if(tail == NULL){
        cout << "List is Empty";
        return;
    }
    // Non-Empty List
    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    cout << endl;
}

int main()
{
    Node* tail = NULL;
    // insert in empty list
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    return 0;
}