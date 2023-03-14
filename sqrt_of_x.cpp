// https://leetcode.com/problems/sqrtx/
#include <bits/stdc++.h>
using namespace std;

int mySqrt(int a)
{
    int start = 1;
    int end = a;
    int mid = start + (end - start) / 2;
    if (a == 0)
    {
        return 0;
    }
    while (start <= end)
    {
        // mid*mid == a gives error
        // so we write mid == a / mid i.e, 4 == 16/4 --> divide number with its sqrt gives the sqrt
        if (mid == a / mid)
        {
            return mid;
        }
        else if (mid < a / mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid - 1;
}

int main()
{
    int a = 16;
    cout << mySqrt(a);
    return 0;
}