#include <bits/stdc++.h>
using namespace std;
int main() {
    long long  n , m;
    cin>>n>>m;
    int i=1;
    while(true){
        if((n*i)%10==0||(n*i)%10==m){
             break;
        }
        else{
            i++;
        }
    }
    cout<<i<<endl;
    return 0;
}