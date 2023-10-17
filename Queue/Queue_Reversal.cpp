/*
    Using Stack
    TC -> O(n)  SC -> O(n)
*/
// We can also do it using recursion
#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
}
void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(2);
    q.push(6);
    q.push(3);
    q.push(7);
    q.push(1);

    reverseQueue(q);
    print(q);

    return 0;
}