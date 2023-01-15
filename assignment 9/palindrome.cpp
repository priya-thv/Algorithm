int Solution::solve(string A) {
   unordered_map<char,int>umaped;
   
   for(int i=0;i<A.size();i++){
        char key=A[i];
        umaped[key]++;
    }
    if(A.size()<=1){
       return 1;
   }
    int one=0;
    for(auto it : umaped){
        if(it.second%2==1) one++;
        if(it.second%2!=0 and one > 1) return 0;
    }
    return 1;
}
