class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for (string& s:strs) {
            string sortedS=s;
            sort(sortedS.begin(),sortedS.end());
            res[sortedS].push_back(s);
        }
        vector<vector<string>> final;
        for (auto& pair:res) {
            final.push_back(pair.second);
        }
        return final;
    }
};
