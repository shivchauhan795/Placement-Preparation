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

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
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

void removeDuplicate2(Node* &head){
    Node* curr = head;
    while(curr != NULL){
        Node* temp = curr->next;
        Node* prev = curr;
        while(temp != NULL){
            if(temp->data == curr->data){
                Node* temp1 = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete temp1;
            }
            else{
                prev = temp;   
                temp = temp->next;
            }
            
        }
        curr = curr->next;
    }
}

// Approach 3
void removeDuplicate3(Node* &head){
    map<int, bool> ans;
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        // duplicate found
        if(ans[curr->data] == true){
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;
        }
        // duplicate not found
        else{
            ans[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtHead(head, tail, 10);
    print(head);
    cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;
    
    insertAtHead(head, tail, 12);
    print(head);
    cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;
    
    insertAtTail(head, tail, 56);
    print(head);
    cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;

    insertAtHead(head, tail, 12);
    print(head);
    cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;
    
    insertAtHead(head, tail, 56);
    print(head);
    cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;
    
    insertAtHead(head, tail, 13);
    print(head);
    cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;
    

    /* Three approach to remove duplicates from Unsorted List:-
        1. sort the list then apply logic of sorted list              TC -> Sorting -> O(nlogn) + previous algo -> O(n) = O(nlogn)  SC -> O(1) 
        2. stay at one node and check other nodes after that node.    TC -> O(n^2)  SC -> O(1)
        3. use map                                                    TC -> O(n)    SC -> O(n)
    */

    // removeDuplicate3(head);
    // print(head);
    // cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;


    removeDuplicate2(head);
    print(head);
    cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;

    return 0;
}