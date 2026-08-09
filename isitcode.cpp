#include <bits/stdc++.h>
using namespace std;
void solve(string&s){
    string t="";
     int n=s.size();
     for(int i=0; i<n; i++){
        s[i]=tolower(s[i]);
     }
     for(int i=0; i<s.size(); i++){
        if(i>0&&t.back()==s[i]){
             continue;
        }
        else{
            t+=s[i];
        }
     }
     int x=0;
     if(t=="meow"){
        cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
}
int main() {
    int n;
    cin>>n;
    while(n--){
         string s;
         int a;
         cin>>a;
         cin>>s;
         solve(s);
    }
    return 0;
}