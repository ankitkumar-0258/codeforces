#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b,c;
    int bount =0;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        int count =0;
        if(a==1){
            count++;
        }
        if(b==1){
            count++;
        }
        if(c==1){
            count++;
        }
        if(count>=2){
            bount++;
        }
        
    }
    cout<<bount<<endl;
    return 0;
}