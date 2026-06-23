#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        string t;
        t=t+s[0];
        for(int i=1; i<s.size(); i++){
           if(i<s.size()-1&&s[i]==s[i+1]){
            t=t+s[i];
            i++;
           }
           else{
            t=t+s[i];
           }
        }
        cout<<t<<endl;
    }
    return 0;
}