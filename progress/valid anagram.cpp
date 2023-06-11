class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length()) {
            return false;  // Anagrams must have the same length
        }
        map<char,int>mp;
        
        for(auto i:s){
            mp[i]++;
        }
        for(int i=0;i<t.size();i++){
            
                if (mp[t[i]] > 0) {
                    mp[t[i]]--;
                }else return false;
                
            
            
            
        }
        return true;
    }
};
