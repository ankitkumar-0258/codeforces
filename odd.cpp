#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;

    while(n--){
         cin>>a;
         int o=0;
         int e =0;
         int x;
         for(int i=0; i<a; i++){
             cin>>x;
             if(x%2!=0){
                 o++;
             }
             else{
                 e++;
             }
         }
         if(o==e){
             cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
    }
    return 0;
}