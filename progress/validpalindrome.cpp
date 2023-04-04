class Solution {
public:
    
    bool isPalindrome(string s) {
         string st;
        for(int i=0;i<s.size();i++) {
            if(isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            if(isalnum(s[i])) {
                st.push_back(s[i]);
            }
        }
        string rev = st;
        reverse(rev.begin(), rev.end());
        return st == rev;
    }
        
    
};
