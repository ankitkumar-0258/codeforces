#include <bits/stdc++.h>
using namespace std;

  void solve(string s){
       int n= s.size();
       map<char,int>mpp;
       string t;
        int x=-1;
       for(int i=0; i<n; i++){
            
            mpp[s[i]]++;
             
            if(mpp[s[i]]==2){
                  x=i;
                 break;
            } 
             t+=s[i];
        }
          
          string l;
          if(x!=-1){
       for(int  i=x; i<n; i++){
             l+=s[i];
       }
    }
        set<char>st(t.begin(), t.end());
        set<char>sf(l.begin(), l.end());

        cout<<st.size()+sf.size()<<endl;
       }
  
int main() {
       int n;
       cin>>n;
       while(n--){
         int a;
         cin>>a;
         string s;
         cin>>s;
       string t;
         for(int i=0; i<a; i++){
             if(!t.empty()&&s[i]==t.back()){
                  t.pop_back();
             }
            
             t+=s[i];
             
         }
         if(t.size()==1){
             t+=s[0];
         }
         solve(t);
       }
    return 0;
}