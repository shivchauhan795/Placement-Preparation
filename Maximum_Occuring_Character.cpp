#include <bits/stdc++.h>
using namespace std;

char MaxOccCharacter(string s)
{
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int number = 0;
        number = s[i] - 'a';
        count[number]++;
    }
    int ansIndex = 0, maxi = -1;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < count[i])
        {
            ansIndex = i;
            maxi = count[i];
        }
    }
    return ansIndex + 'a';
}

int main()
{
    string s;
    cin >> s;
    cout << MaxOccCharacter(s);
    return 0;
}