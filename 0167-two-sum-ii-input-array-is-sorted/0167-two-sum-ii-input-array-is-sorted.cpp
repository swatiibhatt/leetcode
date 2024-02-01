class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {  
        vector<int>ans;
        int str=0; //for storing index
        int end=numbers.size()-1;
        while(str<end)
        {
            if(numbers[str]+numbers[end]==target)
            {
                ans.push_back(str+1);
                ans.push_back(end+1);
                break;
            }
            else if (numbers[str]+numbers[end]>target){
              end--  ;
            }
            else {str++;}
        }
        return ans;
    }
};