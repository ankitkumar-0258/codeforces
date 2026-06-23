#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        int count=0;
        if(a==b){
          cout<<count<<endl;
        }
        else{
       long long t=abs(a-b);
          long long f= t/10;
          if(t%10!=0){
              f++;
          }
          cout<<f<<endl;
        }
    }

    return 0;
}