//https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1
// #include <bits/stdc++.h>
// int findDuplicate(vector<int> &arr) 
// {
//     int ans=0;

//     for(int i=0; i<arr.size(); i++){
//         ans = ans^arr[i];       // 0^4^1^2^3^1
//     }
	
//     for(int i=1; i<arr.size(); i++){
//         ans = ans^i;            // 4^1^2^3^1^1^2^3^4
//     }
//     return ans;             // 1
// }