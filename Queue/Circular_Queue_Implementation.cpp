// https://www.codingninjas.com/studio/problems/circular-queue_1170058?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    
    CircularQueue(int n){
        this->size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){     // to check whether queue is full
            cout << "Queue is full" << endl;
            return false;
        }
        else if(front == -1){   // first element to push
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;   // to maintain cyclic nature
        }
        else{
            rear++;     // normal flow
        }
        arr[rear] = value;      //push inside the queue
        return true;
    }

    int dequeue(){
        if(front == -1){    // to check if queue is empty
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
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

};

int main()
{
    CircularQueue q(5);
    cout << q.enqueue(14) << endl;
    cout << q.enqueue(12) << endl;
    cout << q.enqueue(15) << endl;
    cout << q.enqueue(17) << endl;
    cout << q.enqueue(19) << endl;
    cout << q.enqueue(20) << endl;
    
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    return 0;
}