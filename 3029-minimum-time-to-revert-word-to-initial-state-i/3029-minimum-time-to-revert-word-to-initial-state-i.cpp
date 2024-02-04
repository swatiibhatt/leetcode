class Solution {
public:
    bool isEqual(string &word,string &target)
    {
        for(int i=0;i<word.size();i++)
        {
            if(word[i]!=target[i] && target[i]!='*')
            {
                return false;
            }
        }
            return true;
    }
    int minimumTimeToInitialState(string word, int k) {
       string copy= word;
        int count= 0;
        do{
            copy=copy.substr(k)+string(k,'*');
            count++;
        }while(!isEqual(word,copy));
        {
            return count;
        }
    }
};
