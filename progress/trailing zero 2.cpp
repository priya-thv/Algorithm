 reverse(num.begin(),num.end());
        int n=num.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(num[i]=='0'){
              count++;
            }else if(num[i]!='0'){
               break;
            }
        }
         num.erase(num.begin(),num.begin()+count);
         reverse(num.begin(),num.end());
        return num;
