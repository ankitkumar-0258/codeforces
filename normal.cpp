#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string t;
    for(int i=0; i<n; i++){
       cin>>t;
       reverse(t.begin(),t.end());
       for(int i=0 ; i<t.size(); i++){
        if(t[i]=='q'){
           t[i]='p';
        }
        else if(t[i]=='p'){
            t[i]='q';
        }
        else{
            continue;
        }
       }
       cout<<t<<endl;

    }
    return 0;
}