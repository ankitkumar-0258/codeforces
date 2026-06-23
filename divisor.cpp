#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    long long  n;
    cin>>n;
    long long a;
    long long  r=0;
    for(int i=0; i<n; i++){
       cin>>a;
       r=a%10;
       if(r%2==0){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
    return 0;
}