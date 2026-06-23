#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        cin>>s;
        int t=0;
        int f=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='B'){
                t=i+1;
                break;
            }
        }
        for(int j=s.size()-1; j>=0; j--){
             if(s[j]=='B'){
                f=j+1;
                break;
             }
        }
        int x=f-t+1;
        if(x==0){
            x=1;
        }
        cout<<x<<endl;
    }
    return 0;
}