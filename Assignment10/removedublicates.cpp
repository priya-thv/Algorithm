https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/883632058/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       for(int i=0;i<nums.size()-1;i++){
           for(int j=i+1;j<nums.size();j++){
               if(nums[i]==nums[j]){
                   nums.erase(nums.begin()+j);
                   j--;
               }
           }
       }return nums.size();

    }
};
