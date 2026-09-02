class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=1;
        unordered_map<char,bool> mapping;
        int max_length=1;
        if (s.size()==0) {
            return 0;
        }
        if (s.size()==1) {
            return 1;
        }
        mapping[s[l]]=true;
        while (r<s.size()) {
            if (mapping[s[r]]==false) {
                mapping[s[r]]=true;
                r++;
                max_length=max(max_length,r-l);
            }
            else {
                mapping[s[l]]=false;
                l++;
            }
        }
        return max_length;
    }
};
