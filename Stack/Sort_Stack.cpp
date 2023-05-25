#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &st, int element){
    if(st.empty() || (!st.empty() && st.top() < element) ){
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();
    sortedInsert(st, element);
    st.push(temp);
}

void sortStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();

    sortStack(st);

    sortedInsert(st, temp);

}

int main()
{
    stack<int> st;
    st.push(6);
    st.push(-3);
    st.push(2);
    st.push(-1);

    sortStack(st);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}