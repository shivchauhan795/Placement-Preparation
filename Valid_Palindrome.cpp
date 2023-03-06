// https://leetcode.com/problems/valid-palindrome/
#include<bits/stdc++.h>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if (!isalnum(s[start]))
        {
            start++;
        }
        else if (!isalnum(s[end]))
        {
            end--;
        }
        else if (toLowerCase(s[start]) != toLowerCase(s[end]))
        {
            return false;
        }
        else
        {

            start++;
            end--;
        }
    }
    return true;
}
int main()
{
    string s = "abc";
    cout << isPalindrome(s);
}