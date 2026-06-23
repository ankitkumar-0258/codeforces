#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
        int x=-1;
        cin>>a>>b;
        vector<int>temp(a);
        for(int i=0; i<a; i++){
            cin>>temp[i];
        }
        for(int i=0; i<a; i++){
            if(temp[i]==b){
                x=0;
                break;
            }
        }
        if(x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}