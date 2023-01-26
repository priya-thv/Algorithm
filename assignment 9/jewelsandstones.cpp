class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        int sum=0;
        for(auto x:stones){
            mp[x]++;
        }
        int count=0;
        for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                     count++;
                   // sum=sum+count;
            
                }
                
            }
        }return count;
    }
};
