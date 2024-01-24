class Solution {
public:
    int myAtoi(string s) {
        if(s.empty())return 0; 
        long i=0, sign=1, sum=0, res=0;
        while(i<s.length() && s[i]==' ')++i;
        if(s[i] == '-' || s[i]=='+'){ 
            s[i++]=='-' ? sign = -1 : sign = 1; 
        }

        while(i<s.length()){ 
            if(s[i]>=48 && s[i]<=57) res = res *10 + (s[i++]-'0');
            else return res*sign; 
            if(res > INT_MAX)return sign== -1 ? INT_MIN : INT_MAX;  
           
        }
        return res*sign; 
    }
};