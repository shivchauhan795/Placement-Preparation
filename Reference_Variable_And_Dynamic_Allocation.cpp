#include <bits/stdc++.h>
using namespace std;

// It will update the value as reference is being passed
void update2(int& n)
{
    n++;
}
// It will not update the value as the scope is inside the the function only
void update1(int n)
{
    n++;
}

int main()
{

    int n = 5;
    cout << "Before Increment --> " << n << endl;
    update2(n);
    cout << "After Increment --> " << n << endl;

    return 0;
}