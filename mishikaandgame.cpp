#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b;
    int maxi=0;
    int mini=0;
    int draw=0;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a>b){
            maxi++;
        }
        else if(b>a){
            mini++;
        }
        else{
            draw++;
        }
    }
    if(maxi>mini){
        cout<<"Mishka"<<endl;
    }
    else if(mini>maxi){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}