class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //    for(int i=0;i<nums.size()-1;i++){
    //        for(int j=i+1;j<nums.size();j++){
    //            if(nums[i]==nums[j]){
    //                nums.erase(nums.begin()+j);
    //                j--;
    //            }
    //        }
    //    }return nums.size();
       
       map<int,int>mp;
       vector<int>a=nums;
       nums.clear();
       for(auto x:a){
           mp[x]++;
       }int k=0;
       for(auto v:mp){
           nums.push_back(v.first);
           k++;
       }
       return k;
    }
};
