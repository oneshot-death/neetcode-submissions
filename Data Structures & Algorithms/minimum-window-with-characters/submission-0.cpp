class Solution {
public:
    string minWindow(string s, string t) {
        string res="";
        unordered_map <char,int> required;
        unordered_map <char,int> window;
        int beginning=0;
        for (char x:t) {
            required[x]++;
        }
        int l=0;
        int r=0;
        if (t.size()==0) {
            return res;
        }
        int have=0;
        int need=required.size();

        int minLength=INT_MAX;
        
        while (r<s.size()) {
                window[s[r]]++;
            
            //check if the particular char has reached the required char
            if (required.count(s[r]) && window[s[r]]==required[s[r]]) {
                have++; //required.count only checks if that particular char is needed
            }
            while (have==need) {
                if (r-l+1<minLength) {
                    minLength=r-l+1;
                    beginning=l;
                }
                window[s[l]]--;

                if (required.count(s[l]) && window[s[l]]<required[s[l]]) {
                    have--;
                }
                l++;
            }
            r++;
        }

        if (minLength==INT_MAX) {
            return "";
        }
        return s.substr(beginning, minLength);
        
    }
};
