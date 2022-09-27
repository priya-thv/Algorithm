//https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true


#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
 int n;
       int sum=0;
       cin>>n;
       vector<int>A(n);
       
       for(int i=0;i<n;i++){
               cin>>A[i];
       }
      for(int i =0;i<n;i++){
       sum=sum+A[i];
       
       }
       cout<<sum;
       return 0;
       }
