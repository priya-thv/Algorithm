class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
       /* for(int i=0;i<n;i++){
            for(int j=0;j<(n-i-1);j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }*/
        sort(nums.begin(),nums.end());
        int a= nums[0]*nums[1];
        int b= nums[n-1]*nums[n-2];
        int c = b-a;
        return c;
    }
};
