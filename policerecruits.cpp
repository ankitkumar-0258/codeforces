#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    int a;
    int x=0;
    for(int i=0; i<n; i++){
        cin>>a;
        x=x+a;
        if(x<0){
            x=0;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}