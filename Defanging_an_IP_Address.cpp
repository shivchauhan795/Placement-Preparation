// https://leetcode.com/problems/defanging-an-ip-address/
/*
string defangIPaddr(string address) {
        string ans = "";
        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.'){
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
            else{
                ans.push_back(address[i]);
            }
        }
        return ans;
    }
*/