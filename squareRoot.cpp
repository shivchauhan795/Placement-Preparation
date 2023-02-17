// https://www.codingninjas.com/codestudio/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
#include <bits/stdc++.h>
using namespace std;

long long int sqr_root(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecise(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for(double j = ans; j*j < n; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int temp = sqr_root(n);
    double finalAns = morePrecise(n, 3, temp);

    cout << "Square root of " << n << " is " << finalAns;
    return 0;
}