class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max=1;
        int final_max=1;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        if (size==0) {
            return 0;
        }
        else if (size==1) {
            return max;
        }
        else {
            for (int i=0;i<size-1;i++) {
                if (nums[i]+1==nums[i+1]) {
                    max+=1;
                }
                else if (nums[i]==nums[i+1]) {
                    //do nothing
                }
                else {
                    if (final_max<max) {
                        final_max=max;
                    }
                    max=1; //re-initialising max to 1
                }
            }
            if (final_max<max) {
                final_max=max; //assuming a scenario where all the elements
            }
        }
        return final_max;
    }
};