#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    string t;
    for(int i=0; i<n; i++){
          cin>>a;
          cin>>t;
          if(a>5&&a<5){
            cout<<"NO"<<endl;
          }
          else {
            string s="Timur";
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
             if(s==t){
                cout<<"YES"<<endl;
             }
             else{
                cout<<"NO"<<endl;
             }
          }
    }
    return 0;
}