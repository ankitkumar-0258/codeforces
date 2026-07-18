#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        s[s.size() - 2] = 'i';
        s.erase(s.size() - 1, 1);
        cout<<s<<endl;

    }
    
    return 0;
}