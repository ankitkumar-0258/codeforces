#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
   
    for(int i=0; i<n; i++){
        cin>>s;
         string t;
       for(int j=0; j<s.size()-2; j++){
          t=t+s[j];
       }
       t=t+'i';
       cout<<t<<endl;
    }
    return 0;
}