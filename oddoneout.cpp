#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        if(a==b){
            cout<<c<<endl;
        }
        else if(b==c){
            cout<<a<<endl;
        }
       else if(c==a){
            cout<<b<<endl;
        }
    }
        return 0;
}