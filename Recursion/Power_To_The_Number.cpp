#include <bits/stdc++.h>
using namespace std;

/*

if b is even --> a^(b/2) * a^(b/2)
if b is odd --> a * a^(b/2) * a^(b/2)

*/

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        // even
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << ans;
    return 0;
}