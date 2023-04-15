class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
      //set approch
       /* set<int>st;
        for(auto v:nums1){
            st.insert(v);
        }
        for(auto w:nums2){
            if(st.find(w)!=st.end()){
                st.erase(w);
                a.push_back(w);
            }

        }*/
      //map approch
        map<int,int>mp;

        for(auto v:nums1){
            mp[v]++;
        }
        for(auto n:nums2 ){
            if(mp[n]>0){
               mp.erase(n);
               a.push_back(n);
            }
        }

        return a;
    }
};
