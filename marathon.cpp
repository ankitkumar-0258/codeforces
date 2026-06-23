#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
     int n;
     cin>>n;
     
     while(n--){
        int count =0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b){
            count++;
        }
        if(a<c){
            count++;
        }
        if(a<d){
            count++;
        }
        cout<<count<<endl;
     }
    return 0;
}