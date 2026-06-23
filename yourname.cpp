#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    string t;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        cin>>s>>t;
        sort(s.begin(), s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}