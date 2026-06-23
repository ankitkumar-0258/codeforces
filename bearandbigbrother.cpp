#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    int count =0;
    count =0;
    while(m>=n){
        count ++;
        m=m*2;
        n=n*3;
}
    cout<<count;
    return 0;
}