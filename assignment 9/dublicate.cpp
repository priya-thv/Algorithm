class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>umap;
        vector<int>crr;
        for(auto x:nums){
            umap[x]++;
        }
        for(auto b:umap){
            if(b.second==2){
                crr.push_back(b.first);
            }
        }
        for(int i=0;i<crr.size();i++){
            cout<<crr[i];
        }return crr;
    }
};
