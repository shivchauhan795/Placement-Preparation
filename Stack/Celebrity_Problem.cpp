// https://leetcode.com/problems/find-the-celebrity/
// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// Very Improtant

/*

Conditions:
1. Everyone knows celebrity
2. Celebrity knows no-one

*/

/*
          0 1 2   -> These are the elements i.e, the persons
    0   [ 0 1 0 ]
    1   [ 0 0 0 ]
    2   [ 0 1 0 ]

*/

#include <bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>> m, int a, int b, int n){
    if(m[a][b] == 1){
        return true;
    }
    else{
        return false;
    }
}

int celebrity(vector<vector<int>> m, int n){
    stack<int> s;

    // step1 - push all elements in stack i.e, 1,2,3
    for(int i = 0; i < n; i++){
        s.push(i);
    }
    // step2 - get two elements and compare them if they know each other
    while(s.size() > 1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if(knows(m,a,b,n)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int potentialCandidate = s.top();   // only left element in the stack

    // step 3 - now only single element is left inside the stack i.e, it is the potential celebrity, so verify it.

    // so now we check if all the elements in row are 0
    bool rowCheck = false;
    int zeroCount = 0;
    for(int i = 0; i < n; i++){
        if(m[potentialCandidate][i] == 0){
            zeroCount++;
        }
    }
    if(zeroCount == n){
        rowCheck = true;
    }

    // now we check if all the elements in the col are 0;
    bool colCheck = false;
    int oneCount = 0;
    for(int i = 0; i < n; i++){
        if(m[i][potentialCandidate] == 1){
            oneCount++;
        }
    }
    if(oneCount == n-1){
        colCheck = true;
    }
    if(rowCheck == true && colCheck == true){
        return potentialCandidate;
    }
    else{
        return -1;
    }
}

int main()
{
    vector<vector<int>> arr = {{0,1,0},{0,0,0},{0,1,0}};
    int n = arr.size();
    cout << celebrity(arr, n);
    return 0;
}