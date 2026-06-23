#include <bits/stdc++.h>
#include<vector>
using namespace std;
  int beutiful(int n){
    int x=n;
    int a=n%10;
    n=n/10;
    int b=n%10;
    n=n/10;
    int c=n%10;
    n=n/10;
    int d=n%10;
    int t=0;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
        return x;
    }
    else{
       return  beutiful(x+1);
    }
  }
int main() {
    int n;
    cin>>n;
    cout<<beutiful(n+1);
    return 0;
}