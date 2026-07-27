#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    while(n--){
        cin>>a;
        string s=to_string(a);
        sort(s.begin(),s.end());
        cout<<s[0]-48<<endl;
    }
    return 0;
}