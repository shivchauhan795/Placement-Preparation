#include <bits/stdc++.h>
using namespace std;

void reverse(string& s, int i, int j)
{
    if (i > j)
        return;
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s, i, j);
}

int main()
{
    string s = "abcde";
    reverse(s, 0, s.size() - 1);
    cout << s;
    return 0;
}