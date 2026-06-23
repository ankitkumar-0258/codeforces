#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long c=0;
    if(n%2==0){
        c=n/2;
    }
    else {
        c=-1*(n/2)-1;
    }
    cout<<c;
    return 0;
}