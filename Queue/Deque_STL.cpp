#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    deque<int> d;
    d.push_front(12);
    d.push_front(14);
    d.push_front(16);

    d.push_back(18);
    d.push_back(20);
    d.push_back(22);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;
    
    return 0;
}