class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
      vector<pair<int,int>> ans;
      for(auto i:mp){
        ans.push_back({i.first,i.second});
      }
      sort(ans.begin(), ans.end(), [](auto &a, auto &b) {
      return a.second > b.second;
     });
     vector<int>v;
     for(int i=0;i<k;i++){
        v.push_back(ans[i].first);
     }
     return v;

    }
};
