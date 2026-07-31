#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    while(n--){
         cin>>a;
         string s;
         cin>>s;
         sort(s.begin(),s.end());
         char y=s[s.size()-1];
         int x=-(122-26-y);
         cout<<x<<endl;
    }
    return 0;
}