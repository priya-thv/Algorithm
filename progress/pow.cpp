class Solution {
public:
    double myPow(double x, int n) {
        if(x==1){
            return 1;
        }
        else if(x==0){
            return 0;
        }
        return pow(x,n);
    }
};
