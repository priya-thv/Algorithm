class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>a(n+1,0);
        
        int max=0;
        for(int i=1;i<=n;i++){
            a[i]=a[i-1]+gain[i-1];

            if(a[i]>max){
                max=a[i];
            }
        }

        return max;
    }
};
