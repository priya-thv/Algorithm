https://leetcode.com/problems/a-number-after-a-double-reversal/submissions/892140008/

class Solution {
public:
    int reverse(int n){
    int t=0;
    while(n>0){
        int r=n%10;
        t=t*10+r;
        n=n/10;
        }
        return t;
    }

     bool isSameAfterReversals(int num) {
        
        if(num==0)return true;
        int a=reverse(num);
        int b=reverse(a);
        if(b==num){
            return true;
        }else{
            return false;
        }

    }
};
