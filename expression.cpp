#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max({a*(b+c),b*(a+c),c*(a+b),a*b*c,a+b*c,b+a*c,c+a*b});
    cout<<maxi<<endl;

    return 0;
}