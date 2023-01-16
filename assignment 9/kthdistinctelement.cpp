class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
         vector<string>crr;
        for(auto b:arr){
            mp[b]++;
        

        }
        int i=0;
        for(string s:arr){
            if(mp[s]==1){
                i++;
                
            }if(i==k){
                    return s;
                }
        }
    return "";    
    }
};
