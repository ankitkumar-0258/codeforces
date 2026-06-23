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
          int g=0;
          int y=-1;
         while(next_permutation(temp.begin(),temp.end())){
            int x=temp[0]+temp[1];
            for(int i=0; i<temp.size()-1; i++){
                if(temp[i]+temp[i+1]!=x){
                    g=-1;
                    break;
                }
            }
            if(g==0){
                cout<<"YES"<<endl;
                y=0;
                break;
            }
         }
         if(y==-1){
            cout<<"NO"<<endl;
         }
         
    }
    return 0;
}