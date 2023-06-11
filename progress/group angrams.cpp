class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;//used as 2d vector

        for(auto i:strs){
            string s=i;//we take ever word and sort it 
            sort(s.begin(),s.end());
            mp[s].push_back(i);//in this grp is used to make vector so same element
        }
        vector<vector<string>>r;
        for(auto x:mp){
            r.push_back(x.second);
        }
        return r;
    }
};
