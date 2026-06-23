#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==1||a==2){
            cout<<0<<endl;
        }
        else{
            int x=a-1;
            int y=1;
            int diff=(x-y)/2;
            if((x-y)%2!=0){
               diff= diff+1;
            }
            cout<<diff<<endl;
        }
    }
    return 0;
}