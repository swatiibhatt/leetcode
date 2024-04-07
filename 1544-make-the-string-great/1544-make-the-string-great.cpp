class Solution {
public:
    string makeGood(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(ans.size()!=0)
            {
                if(ans.back()-'a'== s[i]-'A' || ans.back()-'A' ==s[i]-'a')
                {
                    ans.pop_back();
                    continue;
               }
            }
            
            ans.push_back(s[i]);
        }
        return ans;
    }
};
// class Solution {
// public:
//     string makeGood(string s) {
//         string ans="";
//         for (int i=0; i<s.size(); i++){
//             if (ans.size()!=0){
//                 if (ans.back()-'A' == s[i]-'a' || ans.back()-'a' == s[i]-'A'){
//                     ans.pop_back();continue;
//                 }
//             }
//             ans.push_back(s[i]);
//         }
//         return ans;
//     }
// };
