class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      
        int s = nums1.size()+nums2.size();
        vector<int> v(s);
         merge(nums1.begin(), nums1.end(), nums2.begin(),
                   nums2.end(), v.begin());
        
         double median = 0;
        int m = s/2;
        if(s %2 == 0){
            median =  (v[m] +v[m-1]);
            return median/2;
            
        }
        else{
            median = v[s/2];
        }
        return median;
    }
};
