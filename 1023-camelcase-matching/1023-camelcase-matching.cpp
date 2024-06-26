class Solution {
public:
   vector<bool> camelMatch(vector<string>& qs, string pattern, vector<bool> res = {}) {
  for (auto i = 0, j = 0, p = 0; i < qs.size(); ++i) {
    for (j = 0, p = 0; j < qs[i].size(); ++j) {
      if (p < pattern.size() && qs[i][j] == pattern[p]) ++p;
      else if (!islower(qs[i][j])) break;
    }
    res.push_back(j == qs[i].size() && p == pattern.size());
  }
  return res;
}
};