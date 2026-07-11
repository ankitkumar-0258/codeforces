#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
      int i=0;
      int count=0;
      int a=0;
      while(a<n){
            i++;
          a=a+i*(i+1)/2;
           if(a>n){
            break;
           }
          count++;
      }
      cout<<count<<endl;
    return 0;
}