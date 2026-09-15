#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long maxi=max({a,b,c});
        if(a==maxi&&b!=maxi&&c!=maxi){
            if(a==b||a==c){
                a=1;
            }
            a=0;
            b=maxi-b+1;
            c=maxi-c+1;

            cout<<a<<" "<<b<<" "<<c<<endl;
            continue;
        }
        if(b==maxi&&c!=maxi&&a!=maxi){
            a=maxi-a+1;
            b=0;
            c=maxi-c+1;
             cout<<a<<" "<<b<<" "<<c<<endl;
             continue;
        }
        if(c==maxi&&a!=maxi&&b!=maxi){
            a=maxi-a+1;
            b=maxi-b+1;
            c=0;
             cout<<a<<" "<<b<<" "<<c<<endl;
             continue;
        }

       if(maxi==a){
        a=1;
       }
       else{
        a=maxi-a+1;
       }

       if(maxi==b){
        b=1;
       }
       else{
        b=maxi-b+1;
       }
       if(maxi==c){
         c=1;
       }
       else{
         c=maxi-c+1;
       }

       cout<<a<<" "<<b<<" "<<c<<endl;
       
    }
    return 0;
}