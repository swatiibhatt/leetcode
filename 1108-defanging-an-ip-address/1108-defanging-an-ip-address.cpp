class Solution {
public:
    string defangIPaddr(string address) {
     string ans="";
        for(char i=0;i<address.size();i++){
            if(address[i]!='.')
            {
                ans+=address[i];
            }
        else
            ans+="[.]";
        }
    return ans;
    }
};