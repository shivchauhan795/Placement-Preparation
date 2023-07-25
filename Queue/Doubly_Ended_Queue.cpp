// https://leetcode.com/problems/design-circular-deque/

#include <bits/stdc++.h>
using namespace std;

class Deque{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    
    Deque(int n){
        this->size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool PushFront(int value){
        if(isFull()){     // to check whether queue is full
            return false;
        }
        else if(front == -1){   // first element to push
            front = rear = 0;
        }
        else if(front == 0 && rear != size - 1){    // to maintain cyclic nature
            front = size - 1;
        }
        else{
            front--;    // normal flow
        }
        arr[front] = value;     //push inside the queue
        return true;
    }

    bool PushBack(int value){
        if(isFull()){     // to check whether queue is full
            cout << "Queue is full" << endl;
            return false;
        }
        else if(front == -1){   // first element to push
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){  // to maintain cyclic nature
            rear = 0;
        }
        else{
            rear++;     // normal flow
        }
        arr[rear] = value;      //push inside the queue
        return true;
    }

    int PopFront(){
        if(front == -1){    // to check if queue is empty
            cout << "Queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear){  // if single element is present
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;  // to maintain cyclic nature
        }
        else{
            front++;       // normal flow
        }
        return ans;
    }

    int PopBack(){
        if(front == -1){    // to check if queue is empty
            cout << "Queue is empty" << endl;
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear){  // if single element is present
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size - 1;  // to maintain cyclic nature
        }
        else{
            rear--;       // normal flow
        }
        return ans;
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    Deque d(5);
    d.PushBack(12);
    d.PushFront(13);
    cout << d.getFront() << endl;
    cout << d.getRear() << endl;

    return 0;
}