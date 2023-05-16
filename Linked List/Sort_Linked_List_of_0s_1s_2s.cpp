// https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021
// sort linked list of 0s, 1s, 2s

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

// Approach 1 -> Changing Data
void sortList(Node* &head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
}

// Approach 2 -> By maing 3 linked list and then merging them
void insert(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}
void sortList1(Node* &head){
    Node* zeroHead = new Node(-1);
    Node* zerotail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* onetail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twotail = twoHead;

    Node* curr = head;

    // Separate nodes created for 0, 1, 2
    while(curr != NULL){
        if(curr->data == 0){
            insert(zerotail, curr);
        }
        else if(curr->data == 1){
            insert(onetail, curr);
        }
        else if(curr->data == 2){
            insert(twotail, curr);
        }
        curr = curr->next;
    }

    // Merging list

    // 1s list is not empty
    if(oneHead->next != NULL){
        zerotail->next = oneHead->next;
    }
    // 1s list is empty
    else{
        zerotail->next = twoHead->next;
    }
    onetail->next = twoHead->next;
    twotail->next = NULL;
    // head is setup
    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 1);
    print(head);
    // cout << "head -> " << head->data  << " " << "tail -> " << tail->data << endl;

    sortList1(head);
    print(head);
    return 0;
}