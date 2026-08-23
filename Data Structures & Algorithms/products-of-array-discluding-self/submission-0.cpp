class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total_mult=1;
        int zero_count=0;
        for (int i:nums) {
            if (i!=0) {
                total_mult*=i;
            }
            else {
                zero_count+=1;
            }
        }
        vector<int> res;
        if (zero_count>1) {
            return vector<int>(nums.size(),0);
        }
        else if (zero_count==1) {
            for (int x:nums) {
                if (x!=0) {
                    res.push_back(0);
                }
                else {
                    res.push_back(total_mult);
                }
            }
        }
        else {
            for (int x:nums) {
                res.push_back(total_mult/x);
            }
        }
        return res;
    }
};
