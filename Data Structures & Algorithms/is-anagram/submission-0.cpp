class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> dict1;
        map<char,int> dict2;
        for (char x:s) {
            if (dict1[x]) {
                dict1[x]=dict1[x]+1;
            }
            else {
                dict1[x]=1;
            }
        }
        for (char y:t) {
            if (dict2[y]) {
                dict2[y]=dict2[y]+1;
            }
            else{
                dict2[y]=1;
            }
        }
        if (dict1==dict2) {
            return true;
        }
        else {
            return false;
        }
    }
};
