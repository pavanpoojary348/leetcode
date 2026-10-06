class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> m;
    for(int i=0;i<nums.size();i++){
        int n=nums[i];
        int more=target-n;
        if(m.find(more) != m.end()) return {m[more],i};
        m[n]=i;
    }
    return {-1,-1};
}
};