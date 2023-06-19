class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int n=(mainTank-1)/4;
        int r;
        if(additionalTank>=n){
           r=mainTank*10+ n * 10;
        }else{
            
            r=mainTank*10+ additionalTank * 10;
        }
        return r;
    }
};
