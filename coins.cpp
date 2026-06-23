#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long  a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
       
        if(a%2==0){
            cout<<"YES"<<endl;
        }
        else{
            if(b%2==0){
                cout<<"NO"<<endl;
            }
            else{
                int y=a-b;
                if(y%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}