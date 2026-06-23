#include <bits/stdc++.h>
#include<vector>
using namespace std;
void desort(vector<int>&t){
    long long  maxi=INT_MAX;
     for(int i=0; i<t.size()-1; i++){
        long long  x=0;
        long long y=t[i];
        long long  z=t[i+1];
        maxi=min(z-y,maxi);
     }
     cout<<maxi/2+1<<endl;
}
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
        int t=0;
        for(int k=0; k<a-1; k++){
            if(temp[k]>temp[k+1]){
                t=-1;
                break;
            }
            else{
                t=0;
            }
        }
        if(t==-1){
            cout<<0<<endl;
        }
        else{
            desort(temp);
        }
    }
    return 0;
}