https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[3];
    int b[3];
    int score1=0,score2=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }for(int i=0;i<3;i++){
        cin>>b[i];
    }for(int i=0;i<3;i++){
        if(a[i]>b[i])
        {
            score1++;
            
        }else if(a[i]==b[i]){
            continue;
        }
        else {
        score2++;
        }}cout<<score1<<" "<<score2;
        return 0;
    }
