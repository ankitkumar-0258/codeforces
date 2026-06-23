#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    long int n;
    cin>>n;
    int k;
    cin>>k;
    int count=0;
    long int r=0;
    while(count!=k){
           r=n%10;
          if(r!=0){
            n=n-1;
            count++;
          }
         else  if(r==0){
            n=n/10;
            count++;
          }
    }
    cout<<n;
    return 0;
}