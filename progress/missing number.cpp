class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int end=nums.size();
       
        
        unordered_set<int>st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i=1;i<=end;i++){
            if(st.find(i)==st.end()){
                return i; 
            }
        }
        return 0;
    }
};
