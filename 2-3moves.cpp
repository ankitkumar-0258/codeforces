#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
     cin>>a;
     if(a%3==0){
        cout<<a/3<<endl;
     }
     else if(a%3==1){
       if(a>=4){
         cout<<a/3+1<<endl;
       }
       else{
        cout<<2<<endl;
       }
     }
     else if(a%3==2){
        cout<<a/3+1<<endl;
     }

    }
    return 0;
}