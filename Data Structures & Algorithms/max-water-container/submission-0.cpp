#include <cstdlib> //for absolute value and min
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max=0;
        int i=0;
        int j=heights.size()-1;
        while (i<j) {
            int amount=std::min(heights[i],heights[j])*std::abs(i-j);
            if (amount>max) {
                max=amount;
            }
            if (heights[i]<heights[j] || heights[i]==heights[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return max;
    }
};
