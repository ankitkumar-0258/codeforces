#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
        string s;
        cin>>s;
        if(s.size()==1){
            cout<<1<<endl;
            continue;
        }
        int count0=0;
        int count1=0;
        for(int i=0; i<s.size(); i++){
             if(s[i]=='0'){
                 count0++;
             }
             else{
                count1++;
             }
        }
         int x=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                 if(count1>0){
                     count1--;
                 }
                 else{
                     cout<<s.size()-i<<endl;
                     x=-1;
                     break;
                 }
            }
            else{
                 if(count0>0){
                     count0--;
                 }
                 else{
                     cout<<s.size()-i<<endl;
                     x=-1;
                     break;
                 }
            }

            
        }
        if(x==0){
            cout<<0<<endl;
        }
     }
    return 0;
}