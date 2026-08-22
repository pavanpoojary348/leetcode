class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26]={0};
        int pash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            pash[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i]!=pash[i]){
                return false;
            }
        }
        return true;
    }
};