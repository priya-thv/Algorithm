class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int leftsum=0;
        int total=0;
        int rs;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }

        for(int i=0;i<n;i++){
          rs=total-leftsum-nums[i];
          if(leftsum==rs){
              return i;
          }leftsum+=nums[i];
        }
        return -1;
    }
};
