#include <bits/stdc++.h>
using namespace std;
int main() {
    long long  n;
    cin>>n;
    long long  a;
    for(int i=0; i<n; i++){
        cin>>a;
        long long  x=a/3;
        if(x+2*x==a){
            cout<<x<<" "<<x<<endl;
        }
        else if(x+2*(x+1)==a) {
            cout<<x<<" "<<x+1<<endl;
        }
        else if(x+1 +2*(x)==a){
            cout<<x+1<<" "<<x<<endl;
        }
       
    }
    return 0;
}