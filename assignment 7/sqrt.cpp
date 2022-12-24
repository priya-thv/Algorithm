class Solution {
public:
    int mySqrt(int x) {
        if(x==1){
            return 1;

        }
        int start=1;
        int end=x/2;
        int mid=0;

        while(start<=end){
            mid=(start+end)/2;
            
            if(mid==(x/mid)){
    
                return mid;
            
                break;

            }else if(mid<(x/mid)){
    
                start=mid+1;
    
            }else if(mid>(x/mid)){
    
                end=mid-1;
            }
        }
        return end;
        }
    };
