#include <bits/stdc++.h>
using namespace std;
int main() {  
    int t;
    cin>>t;;
    while(t--){
        long long  n,k;
        cin>>n>>k;
       long long x=k+(k-1)/(n-1);
       cout<<x<<endl;
    }
    return 0;
}