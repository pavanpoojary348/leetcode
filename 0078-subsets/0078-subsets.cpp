class Solution {
public:
void printy(int i,vector<int> &nums,vector<int> &v,vector<vector<int>> &ans){
        if(i == nums.size()) {
            ans.push_back(v);
            return;
        }
    printy(i+1,nums,v,ans);
    v.push_back(nums[i]);
    printy(i+1,nums,v,ans);
    v.pop_back();
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> v;
       vector<vector <int>> ans;
        printy(0,nums,v,ans);
        return ans;
    }
};