#include <bits/stdc++.h>
using namespace std;

 void solve(string&s){
    int x=1;
    int maxi=1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            x++;
        }
        else{
            maxi=max(maxi,x);
            x=1;
        }
    }
    maxi=max(maxi,x);
    cout<<maxi+1<<endl;
 }
int main() {
    int n;
    cin>>n;
    while(n--){
         int x;
         cin>>x;
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}