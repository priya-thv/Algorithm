class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>l(n,0);
        vector<int>r(n,0);
        vector<int>ans(n,0);
        int sum=nums[0];

        for(int i=1;i<n;i++){
            l[i]+=l[i-1]+nums[i-1];
            sum+=nums[i];
        }
         
         for(int i=0;i<n;i++){
             r[i]+=(sum-nums[i]);
             sum-=nums[i];
         }

         for(int i=0;i<n;i++){
             ans[i]=abs(r[i]-l[i]);
         }
         return ans;
    }
};
