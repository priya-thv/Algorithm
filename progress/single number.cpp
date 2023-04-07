class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(auto it:nums){
            mp[it]++;
        }
        for(auto b:mp){
            if(b.second==1){
                return b.first;
            }
        }return 1;
    }
};
