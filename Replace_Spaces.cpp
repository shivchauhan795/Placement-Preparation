// https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
#include <bits/stdc++.h>
using namespace std;
string replaceSpaces(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main()
{
    string s = "Coding Ninjas Is A Coding Platform";
    cout << replaceSpaces(s);
    return 0;
}