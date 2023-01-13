https://www.codechef.com/problems/WORDLE


#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    while (n--) {
    string s;
    string t;
    cin>>s>>t;
    for(int i=0;i<5;i++){
       if(s[i]==t[i]){
           cout<<"G";
        }else{
            cout<<"B";
        }  
    }cout<<endl; 
    }
}   
