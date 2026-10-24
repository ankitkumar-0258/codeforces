#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      while(n--){
         string s;
         cin>>s;
         string t;
         bool isfound=false;
         for(int i=0; i<s.size()-1; i++){
                if(s[i]==s[i+1]){
                    isfound=true;
                }
         }

        if(isfound){
            cout<<1<<endl;
        }
        else{
            cout<<s.size()<<endl;
        }
      }
    return 0;
}