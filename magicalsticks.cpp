#include <bits/stdc++.h>
using namespace std;
int main() {
    long long  n;
    cin>>n;
    long long  a;
    while(n--){
        cin>>a;
        if(a%2==1){
            cout<<(a+1)/2<<endl;
        }
        else{
            cout<<a/2<<endl;
        }
    }
    return 0;
}