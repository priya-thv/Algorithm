class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i])
                count++;
            }
             a.push_back(count);
            
        }return a;
    }
};
