class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        
        map<int,int >mp;
        vector<int>a;
        if(nums2.size()>nums1.size()){
            swap(nums1,nums2);
        }
        for(auto x:nums1){
            mp[x]++;
        }
        
        for(auto n:nums2){
              if(mp[n]>0){// in this it will check the fre of nums2elemnt in map if it //>1then it will push back it and the dcreasen the frequency 
                  a.push_back(n);
                  mp[n]--;
              }
        }
        
       

         return a;     

    }
};
