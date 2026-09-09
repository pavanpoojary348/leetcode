class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
                    unordered_set <int> f;
                    for(int m:nums){
                        if(f.count(m)) return true;
                        f.insert(m);
                    }
                    return false;
    }
};