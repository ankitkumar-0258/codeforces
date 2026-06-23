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
        for(int i=0; i<a; i++){
            cin>>temp[i];
        }
        sort(temp.begin(),temp.end());
        int x=0;
        int y=0;
        int t=-1;
        for(int i=0; i<a; i++){
             x=x+temp[i];
             for(int j=i; j<a-1; j++){
                y=y+temp[j+1];
             }
             if((x%2==0&&y%2==0)||(y%2!=0&&x%2!=0)){
                t=0;
                cout<<"YES"<<endl;
                break;
             }
             y=0;
        }
        if(t==-1){
        cout<<"NO"<<endl;
        }
    }
    return 0;
}