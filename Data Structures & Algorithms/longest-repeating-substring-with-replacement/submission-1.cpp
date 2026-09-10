class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int output=0;
        unordered_map <char,int> mapping;
        int maximum=0;
        if (s.size()==0) {
            return 0;
        }
        while (r<s.size()) {
            mapping[s[r]]++;
            maximum=max(maximum,mapping[s[r]]);
            if ((r-l+1)-maximum<=k) {
                output=max(output,(r-l+1));
            }
            else {
                mapping[s[l]]--; //not part of the window anymore
                l++;
            }
            r++;
        }
        return output;
    }
};
