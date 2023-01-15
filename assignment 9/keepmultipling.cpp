class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           if(original==nums[i]){
               int temp=nums[i]*2;
               original=temp;
           }
           
        }return original;
    }
};
