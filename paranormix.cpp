#include <bits/stdc++.h>
#include<vector>
using namespace std;
  int nextprime(int n){
    for(int i=2; i<n+1; i++){
        if((n+1)%i==0){
            return nextprime(n+1);
        }
    }
    return n+1;
  }
int main() {
    int n;
    int l;
    cin>>l>>n;
    int y=nextprime(l);
    if(y==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}