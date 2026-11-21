#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
     vector<long long>temp(n);
     for(int i=0; i<n; i++){
         cin>>temp[i];
     }
     vector<long long>hemp(n);
     for(int i=0; i<n; i++){
         cin>>hemp[i];
     }

       vector<long long>t(n);
       for(int i=0; i<n; i++){
          t[i]=temp[i]-hemp[i];
       }

       sort(t.begin(), t.end());
      long long  count=0;
       int i=0;
       int j=n-1;
       while(i<j){
          if(t[i]+t[j]>0){
             count+=(j-i);
             j--;

          }
          else{
             i++;
          }
       }
      cout<<count<<endl;
    return 0;
}