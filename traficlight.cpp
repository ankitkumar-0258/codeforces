#include <bits/stdc++.h>
using namespace std;
void solve(string s, char c, int n){
             int countf=0;
             int countb=0;
    for(int i=0; i<n; i++){
       if(s[i]=='g'){
        
                break;
       }
         countf++;
      
    }

    for(int i=n-1; i>=0; i--){
         if(s[i]=='g'){
          
             break;
         }
           countb++;
    }

    cout<<max(countb, countf)<<endl;
}
int main() {
     int n;
     cin>>n;
     while(n--){
        int a;
        char c;
        cin>>a>>c;
        string s;
        cin>>s;
        solve(s, c,a);
     }
    return 0;
}