class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int i,j;
        sort(p.rbegin(),p.rend());
        for ( i  = 0,j = p.size() - 1; i <= j; ++i)
            if (p[i] + p[j] <= limit) 
            {
                j--;
            }
        return i;
    } 
};