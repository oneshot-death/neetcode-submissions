class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> final;
        sort(nums.begin(),nums.end());
        if (nums.size()<3) {
            return final;
        }
        for (int i=0;i<nums.size()-2;i++) {
            int j=i+1;
            int k=nums.size()-1;
            if (i>0 && nums[i-1]==nums[i]) { //skipping duplicates
                continue;
            }
            while (j<k) {
                if (-nums[i]==nums[j]+nums[k]) {
                    final.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while (j<k && nums[j-1]==nums[j]) { //skipping dupes
                        j++;
                    }
                    while (j<k && nums[k+1]==nums[k]) {
                        k--;
                    }
                }
                else if (nums[j]+nums[k]<-nums[i]) {
                    j++;
                }
                else if (nums[j]+nums[k]>-nums[i]) {
                    k--;
                }
            }
        }
        return final;
    }
};
