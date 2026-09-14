#include <bits/stdc++.h>
using namespace std;
int main() {
        long long a;
        cin>>a;
        vector<long long>temp(a);
        for(int i=0; i<a; i++){
             cin>>temp[i];
        }
        long long count=1;
        long long maxi=0;
        for(long long i=0; i<a; i++){
             if(i<a-1&&temp[i]<=temp[i+1]){
                 count++;
             }
             else{
                 maxi=max(maxi, count);
                 count=1;
             }
        }
        cout<<maxi<<endl;
     
    return 0;
}