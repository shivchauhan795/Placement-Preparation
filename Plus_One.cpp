// https://leetcode.com/problems/plus-one/
/*

vector<int> reverseArray(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}
vector<int> plusOne(vector<int> &digits)
{
    vector<int> ans;
    int carry = 0;
    int i = digits.size() - 1;
    int j = 1;
    while (j == 1)
    {
        int element = digits[i];
        int sum = digits[i] + j;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = digits[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverseArray(ans);
}

*/