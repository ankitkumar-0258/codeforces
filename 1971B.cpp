#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
        string s;
        cin>>s;
        string t =s;
        set<char>st(s.begin(), s.end());
        if(st.size()>1){
             cout<<"YES"<<endl;
             reverse(s.begin(), s.end());
             if(s==t){
                 sort(s.begin(), s.end());

                 cout<<s<<endl;
             }
             else{
                cout<<s<<endl;
             }


        }
        else{
             cout<<"NO"<<endl;
        }
     }
    return 0;
}