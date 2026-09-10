class Solution {
public:
    int countDigits(int num) {
        int y;
        int s=0;
        int original=num;
         while(num!=0){
            y=num%10;
            if( y!=0 && original%y==0) s++;
            num=num/10;
         } 
         return s;
    } 
};