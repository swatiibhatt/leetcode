class Solution {
public:
    bool isPerfectSquare(int num) {
        int ans=sqrt(num);
        if ((ans*ans) == num) 
        {
            return true;
        }
        return false;
    }
};