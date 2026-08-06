class Solution {
public:
    bool isPalindrome(int x) {
            int num=x;
    long long  rev=0;
    if (x < 0)
    return false;
    while(num!=0){
        int div=num%10;
        rev=(rev*10)+div;
        num=num/10;
    }
    if(x==rev){
        return true;
    }
    else return false;
        
    }
};