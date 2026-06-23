#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n<1000){
        return 0;
    }
    int count=0;
    for(int i=1000; i<=n; i=i*1000){
        
        count=count-i+n+1;
    }
    cout<<count;
    return 0;
}