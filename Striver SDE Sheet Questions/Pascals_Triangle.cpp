/* 
1st Problem
    Find Row (R) & Col (C). Find element at that place in a Pascal's Triangle.
2nd Problem
    Print any Nth Row of a Pascal's Triangle.
3rd Problem
    Given N. Print the entire Pascal's Triangle.
*/

// 1st Problem  TC -> O(r)  SC -> O(1)

/*
    Formula to find element at place in a pascal's triangle:
            n-1
               C
                r-1
*/

/*
#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    int res = 1;
    for(int i = 0; i < r; i++){     // shortcut of the formula
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

int main()
{
    int r, c;
    cin >> r >> c;
    cout << nCr(r-1, c-1);
    return 0;
}
*/


// 2nd Problem  TC -> O(n)  SC -> O(1)

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ans = 1;
    cout << ans << " ";
    for(int i = 1; i < n; i++){
        ans = ans*(n-i);
        ans = ans/i;
        cout << ans << " ";
    }

    return 0;
}
*/

// 3rd Problem  TC -> O(n^2)  SC -> O(n^2)
// Use same logic as 2nd Problem. Just do it for every row.

// https://leetcode.com/problems/pascals-triangle/

/*
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(ans);
        for(int i = 1; i < row; i++){
            ans = ans*(row-i);
            ans = ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
*/
