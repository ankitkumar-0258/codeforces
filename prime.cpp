#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int t=0;
   
    for(int i=2; i<b; i++){
        if(b%i==0){
            t=-1;
            break;
        }
    }
    if(t==-1){
        cout<<"NO"<<endl;
    }
    else if(b-a<=4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}