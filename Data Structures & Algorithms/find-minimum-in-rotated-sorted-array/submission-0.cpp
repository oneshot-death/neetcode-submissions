class Solution {
public:
    int findMin(vector<int> &nums) {
        int res=nums[0];
        int l=0;
        int r=nums.size()-1;
        while (l<=r) {
            if (nums[l]<nums[r]) { //check if already sorted
                res=min(res,nums[l]);
                break;
            }

            int m=l+(r-l)/2;
            res=min(res,nums[m]);
            if (nums[m]>=nums[l]) { //left half is increasing
                l=m+1;
            }
            else { //right is increasing
                r=m-1;
            }
        }
        return res;
    }
};
