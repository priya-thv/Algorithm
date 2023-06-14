class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
        int n=nums.size();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]==0 ){
                nums.erase(nums.begin()+i);
                count++;
            }else continue;
        }
        nums.insert(nums.end(), count, 0);
    }
};
