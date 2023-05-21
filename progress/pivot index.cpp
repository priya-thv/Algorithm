class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ls=0;
        int sum=0;
        int rs;

        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }

        for(int i=0;i<n;i++){
            rs=sum-ls-nums[i];
            if(ls==rs){
                return i;
            } 
            ls+=nums[i];
        }
        return -1;
    }
};
