class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
       // reverse(s.begin(),s.end());
       for(int i=0;i<s.size()/2;i++){
           swap(s[i],s[n-i-1]);
       }
    }
};
