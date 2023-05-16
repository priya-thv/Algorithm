class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int j=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=val){
        //         nums[j++]=nums[i];
        //     }
        // }
        // return j; 

        
        vector<int>a=nums;
        nums.clear();
        int k=0;
       
        for(int i=0;i<a.size();i++){
            if(a[i]!=val){
                nums.push_back(a[i]);
                k++;
            }
        
        }return k;
    }
};
