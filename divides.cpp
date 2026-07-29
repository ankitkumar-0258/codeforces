#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long  a,b;
    while(n--){
        cin>>a>>b;
        int count=0;
        int bount=0;
        int x=a;
        int y=b;
       while(a!=0){
            b++;
         count++;
         a=a/b;
         count++;
       } 
      
        cout<<min(count,bount)<<endl;
    }
    return 0;
}