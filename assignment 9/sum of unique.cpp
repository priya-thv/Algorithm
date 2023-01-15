class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>crr;
        int sum=0;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto b:mp){
            if(b.second==1){
                crr.push_back(b.first);
            }
        }
        for(int i=0;i<crr.size();i++){
            sum=sum+crr[i];
        }return sum;
    }
};
