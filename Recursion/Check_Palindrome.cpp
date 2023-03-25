#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, ++s, --e);
    }
}

int main()
{
    string s = "abcba";

    bool isPalindrome = checkPalindrome(s, 0, s.size() - 1);

    if (isPalindrome)
        cout << "It is a Palindrome";
    else
        cout << "It is not a Palindrome";

    return 0;
}