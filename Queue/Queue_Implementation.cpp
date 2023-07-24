// https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:

    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size){
            cout << "Queue is full" << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int pop(){
        if(front == rear){  // It means queue is empty
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int qfront(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front == rear){
            return 1;
        }
        else{
            return 0;
        }
    }

};

int main()
{
    Queue q(5);
    q.push(11);
    q.push(13);
    q.push(16);
    cout << "Front is " << q.qfront() << endl;
    q.pop();
    cout << "Front is " << q.qfront() << endl;
    if(q.isEmpty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    return 0;
}