class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        int n=nums.size(); 
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(st.find(i)==st.end()){
                return i;
                break;
            }
        }
        return n+1;
    }
};
