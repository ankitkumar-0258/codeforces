#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      while(n--){
         int a;
         cin>>a;
         vector<int>temp(a);
         for(int i=0; i<a; i++){
             cin>>temp[i];
         }

        int maxi=temp[a-1]-temp[0];
        for(int i=0; i<a-1; i++){
            maxi=max(maxi, temp[a-1]-temp[i]);
        }
        for(int i=0; i<a; i++){
            maxi=max(maxi, temp[i]-temp[0]);
        }

        for(int i=0; i<a-1; i++){
             maxi=max(maxi, temp[i]-temp[i+1]);
        }

        cout<<maxi<<endl;
      }
    return 0;
}