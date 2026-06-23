#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string t;
    string s ="codeforces";
    for(int i=0; i<n; i++){
        cin>>t;
        int count =0;
        for(int i=0; i<10; i++){
            if(s[i]!=t[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}