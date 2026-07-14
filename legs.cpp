#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        int count=0;
        int x=a%4;
        count=a/4;
        x=x/2;
        count=count+x;
        cout<<count<<endl;
    }
    return 0;
}