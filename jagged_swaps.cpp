#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        vector<int>temp(a);
        for(int j=0; j<a; j++){
            cin>>temp[j];
        }
        if(temp[0]!=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}