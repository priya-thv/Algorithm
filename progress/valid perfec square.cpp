class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        int start=1;
        int end=num/2;
        int mid;
        for(int i=1;i<=end;i++){
            mid=(start+end)/2;
            if(pow(mid,2)==num){
                return true;
            }else if(num<pow(mid,2)){
                end=mid-1;
            }else if(num>pow(mid,2)){
                start=mid+1;
            }
        }return false;
    }
};
