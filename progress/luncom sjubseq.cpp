class Solution {
public:
    int findLUSlength(string a, string b) {
        int c=a.size();
        int d=b.size();
        for(int i=0;i<a.size();i++){
            if(c==d && a.find(b)==0 ){
               return -1;
            }else if(a.find(b)==0 && d<c){
                return c;
            }
        }return b.size();
    }
};
