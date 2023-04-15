class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max=1;
        int element;
        map<int,int>p;
        for(auto i:nums){
            p[i]++;
        }
        for(auto v:p){
            if(v.second>=max){
                max=v.second;
                element=v.first;
            }
        }return element;
    }
};
