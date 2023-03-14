// https://leetcode.com/problems/length-of-last-word/
#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                return count;
            }
        }
    }
    return count;
}

int main()
{
    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s);
    return 0;
}