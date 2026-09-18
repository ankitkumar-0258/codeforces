#include <bits/stdc++.h>
using namespace std;

void solve( vector<long long>&temp){
     long long n= temp.size();
     vector<long long>hemp(n);
     int j=0;
     int l=0;
     for(int i=0; i<n; i++){
         if(i%2==0){
            hemp[i]=temp[j];
            j++;
         }
         else{
             hemp[i]=temp[n-1-l];
             l++;
              
         }
     }

     for(int i=0; i<n; i++){
         cout<<hemp[i]<<" ";
     }
     cout<<endl;
}
int main() {
     int n;
     cin>>n;
     while(n--){
         long long a;
         cin>>a;
        vector<long long >temp(a);
        for(int i=0; i<a; i++){
             cin>>temp[i];
        }
         solve(temp);
     }
    return 0;
}