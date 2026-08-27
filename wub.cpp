#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string t="";
    for(int i=0; i<s.size();){
         if(i+2<s.size()&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            if(!t.empty()&&t.back()!=' '){
                 t+=' ';
            }
            i+=3;
         }
         else{
         t+=s[i];
          i++;
         }
    }
    cout<<t<<endl;
    return 0;
}