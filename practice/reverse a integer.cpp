https://leetcode.com/problems/reverse-integer/submissions/892109895/

class Solution {
public:
    int reverse(int x) {
        long long t=0;
        int r;
      while(x!=0){
           r=x%10;
          
           t=t*10+r;
          x=x/10;
      }  if(t>INT_MAX || t<INT_MIN) return 0;
      return t;
    }
};
