#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
int n;
   cin>>n;
   int a;
   int count=0;
   int r=0;
   for(int i=0; i<n; i++){
     cin>>a;
     if(a<10){
       for(int i=1; i<=a; i++){
         count=a;
       }
      }
      else if(a>=10&&a<100){
            count=9;
         for(int i=10; i<=a; i=i+10){
            count++;
         }
      }
      else if(a>=100&&a<1000){
         count=18;
         for(int i=100; i<=a; i=i+100){
             count++;
         }
      }
      else if(a>=1000&&a<10000){
         count=27;
         for(int i=1000; i<=a; i=i+1000){
            count++;
         }
      }
      else if(a>=10000&&a<100000){
           count=36;
           for(int i=10000; i<=a; i=i+10000){
             count++;
           }
      }
      else if(a>=100000&&a<1000000){
         count=45;
         for(int i=100000; i<=a; i=i+100000){
            count++;
         }
      }
      cout<<count<<endl;
      }
    return 0;
}