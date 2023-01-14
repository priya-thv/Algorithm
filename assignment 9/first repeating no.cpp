https://www.interviewbit.com/problems/first-repeating-element/


int Solution::solve(vector<int> &A) {
    unordered_set<int>s;
    int ans=-1;
    for(int i=A.size()-1;i>=0;i--){
        if(s.find(A[i])!=s.end()){
            ans=A[i];
        }
        s.insert(A[i]);
    }
    return ans;
    
}
