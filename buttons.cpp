#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0; i<n; i++){
 cin>>a>>b>>c;
       if(a>b){
        cout<<"First"<<endl;
       }
       else if(b>a){
        cout<<"Second"<<endl;
       }
       else if(a==b){
        if(c%2!=0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
       }
    }
    return 0;
}