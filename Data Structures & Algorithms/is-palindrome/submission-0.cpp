class Solution {
public:
    bool isPalindrome(string s) {
        int size=s.size();
        if (size==0 || size==1) {
            return true;
        }
        int p1=0;
        int p2=size-1;
        while (p1<p2) { //just checking halfway through the string is enough
            while (isalnum(s[p1])==0 && p1<p2) {
                p1++;
            }
            while (isalnum(s[p2])==0 && p1<p2) {
                p2--;
            }
            if (tolower(s[p1])!=tolower(s[p2])) {
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};
