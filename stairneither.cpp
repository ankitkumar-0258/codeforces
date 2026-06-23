#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        if(a<b&&b<c&&a<c){
            cout<<"STAIR"<<endl;
        }
        else if(a<b&&b>c){
            cout<<"PEAK"<<endl;
        }
        else {
            cout<<"NONE"<<endl;
        }
    }

    return 0;
}