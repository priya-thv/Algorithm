class Solution {
public:
    int guessNumber(int n) {
       long  pick;
       long start=1;
       long end=n;
       long mid;
       while(start<end){
           mid=(start+end)/2;
            int pick=guess(mid);
           if(pick==0){
               return mid;
           }else if(pick==1){
               start=mid+1;
           }else{
               end=mid-1;
           }
       }return end;
    }
};
