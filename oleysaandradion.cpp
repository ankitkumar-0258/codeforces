#include <bits/stdc++.h>
using namespace std;
int main() {
     int n , k;
     cin>>n>>k;
    string t;
    t=t+to_string(k%10);
    if(k==10){
         t="";
         t=t+to_string(1);
    }
    for(int i=1; i<n; i++){
        t+='0';
    }
    if(n==1&&k==10){
        cout<<-1<<endl;
        return 0;
    }
    cout<<t<<endl;
     
    return 0;
}