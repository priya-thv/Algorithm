// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    long long int start=1;
    long long int mid;
    long long int end=n; 

    while(start<=end){
        mid=(start+end)/2;
        
        if(isBadVersion(mid)){
           end=mid-1;
        }else if(!isBadVersion(mid)){
            start=mid+1;
        }
    }return start;
    }
};
