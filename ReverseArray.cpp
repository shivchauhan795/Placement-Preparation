#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while(s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void printArray(vector<int> ans)
{
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(5);
    v.push_back(3);
    v.push_back(12);
    v.push_back(17);
    v.push_back(2);

    vector<int> ans = reverse(v);

    cout << "Printing Reverse array: ";
    printArray(ans);

    return 0;
}