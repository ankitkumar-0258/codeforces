#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
         cin>>a;
         vector<int>temp(a);
         for(int j=0; j<a; j++){
            cin>>temp[j];
         }
         sort(temp.begin(),temp.end());
         temp[0]=temp[0]+1;
         long long l=1;
         for(int k=0; k<a; k++){
              l*=temp[k];
         }
         cout<<l<<endl;
    }
    return 0;
}