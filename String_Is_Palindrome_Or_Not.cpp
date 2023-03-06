#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while(start <= end)
    {
        if(!isalnum(s[start])){
            start++;
        }
        else if(!isalnum(s[end])){
            end--;
        }
        else if(toLowerCase(s[start]) != toLowerCase(s[end]))
        {
            return false;
        }
        else{

            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string s = "N2 i&nJA?a& jnI2n";
    cout << checkPalindrome(s);
    return 0;
}