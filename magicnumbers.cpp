#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count1=0;
    int count4=0;
    int count14=0;
    if(s[0]!='1'){
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0; i<s.size(); i++){
         if(s[i]!='1'&&s[i]!='4'){
             cout<<"NO"<<endl;
             return 0;
         }
    }
    for(int i=0; i<s.size(); i++){
          if(s[i]=='4'){
             count4++;
          }
          else if(s[i]!='4'){
             count4=0;
          }
          if(count4>=3){
             cout<<"NO"<<endl;
             return 0;
          }

          
    }
    if(count4>=3){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}