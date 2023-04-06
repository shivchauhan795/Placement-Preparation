// https://leetcode.com/problems/boats-to-save-people/

#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int count = 0;
        int i = 0, j = people.size() - 1;
        while(i <= j){
            count++;
            if(people[i] + people[j] <= limit){
                i++;
            }
            j--;
        }
        return count;
    }

int main()
{
    vector<int> people = {1, 2};
    int limit = 3;
    cout << numRescueBoats(people, limit);
    return 0;
}