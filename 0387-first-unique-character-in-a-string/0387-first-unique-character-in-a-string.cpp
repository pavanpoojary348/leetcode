class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
       for(int i=0;i<s.size();i++){
        int n=hash[s[i]-'a'];
        if(n==1) return i;
    }
    return -1;
    }
};