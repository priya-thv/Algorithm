#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int a;
    cin>>a;
    
    while(a--){
        int command,element;
        cin>>command;
        cin>>element;
        if(command==1){
            //cin>>element;
            s.insert(element);
        }else if(command==2){
            //cin>>element;
            s.erase(element);
        }else if(command==3){
            //cin>>element;
           if(s.find(element)!=s.end())
           cout<<"Yes"<<endl;
           else 
           cout<<"No"<<endl;
        }    
        }
    return 0;
}



