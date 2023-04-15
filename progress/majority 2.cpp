class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int max=1;
        vector<int>a;
        map<int,int>mp;
        
        for(auto i:nums){
            mp[i]++;
        }
        
        for(auto v:mp){
           if(v.second>(nums.size()/3)){
               a.push_back(v.first);
           }
        }
        return a;
    }
};
