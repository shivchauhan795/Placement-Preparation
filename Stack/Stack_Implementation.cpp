#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    // properties
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){     // if size = 6 and top is at index 4, then 6-4 = 2 i.e, 1 element can be inserted as index is upto 5 only.
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top < 0){
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(42);
    st.push(45);
    st.push(22);
    st.push(42);
    st.push(45);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    return 0;
}