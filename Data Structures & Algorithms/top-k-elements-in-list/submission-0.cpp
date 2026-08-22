class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapping;
        for (int x:nums) {
            if (mapping[x]) {
                mapping[x]=mapping[x]+1;
            }
            else {
                mapping[x]=1;
            }
        }
        vector<pair<int,int>> arr;
        for (const auto& t:mapping) {
            arr.push_back({t.first,t.second});
        }
        sort(arr.begin(),arr.end(),[](pair <int,int> a,pair<int,int> b) {
            return a.second>b.second;
        });
        vector<int> final;
        for (int x=0;x<k;x++) {
            final.push_back(arr[x].first);
        }
        return final;
    }
};
