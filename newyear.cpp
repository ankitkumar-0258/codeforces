#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    int r=0;
    int d=240-y;
    int s=0;
    int count=0;
    for(int i=1; i<=x; i++){
      r=r+5*i;
    }
    if(r<=d){
        count=x;
    }
    else{
        int i=1;
       while(s<=d){
        s=s+5*i;
        count++;
        i++;
       }
    }
    if(s-d>0){
        count=count-1;
    }
    cout<<count;
    return 0;
}