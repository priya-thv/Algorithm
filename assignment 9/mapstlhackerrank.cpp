#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>mp;
    int a;
    cin>>a;
    
    
    while(a--){
        string name;
        int marks,command;
        cin>>command;
        if(command==1){
            cin>>name>>marks;
        mp[name]+=marks;
        }else if(command==2){
            cin>>name;
           mp[name]=0;
        }else if(command==3){
            cin>>name;
            cout<<mp[name]<<endl;
        }
    }
    
    
      
    return 0;
}



