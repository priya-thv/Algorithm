class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                count=1;
            }else{
                count++;
            } 
            if(count>2){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};
