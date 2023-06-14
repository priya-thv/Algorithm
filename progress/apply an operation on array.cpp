class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
               nums[i]=nums[i]*2;
               nums[i+1]=nums[i+1]*0;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                count++;
            }
        }
        nums.insert(nums.end(),count,0);
        return nums;
    }
};
