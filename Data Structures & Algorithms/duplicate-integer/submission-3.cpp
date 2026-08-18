class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for (int x:nums) {
            if (check.find(x) == check.end()) {
                check.insert(x);
            }
            else {
                return true;
            }
        }
        return false;
    }
};