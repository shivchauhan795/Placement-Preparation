// https://leetcode.com/problems/permutation-in-string/

#include<bits/stdc++.h>
using namespace std;
    bool checkEqual(int count[26], int count2[26])
    {
        for(int i = 0; i < 26; i++)
        {
            if(count[i] != count2[i])
            {
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        
        // Taken count of s1
        int count[26] = {0};
        for(int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count[index]++;
        }

        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        // running first window
        while(i < windowSize && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        // check if window is equal to s1
        if(checkEqual(count, count2)){
            return 1;
        }

        // checking for other elements in s2
        while(i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            index = s2[i - windowSize] - 'a';
            count2[index]--;

            i++;
            if(checkEqual(count, count2)){
                return 1;
            }
        }
        return 0;
    }
int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    cout << checkInclusion(s1,s2);
}