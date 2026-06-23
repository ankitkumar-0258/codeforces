#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
         cin>>a>>b;
         int x= 23*60 +60 -(a*60+b);
         cout<<x<<endl;
    }
    return 0;
}