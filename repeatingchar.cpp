#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string f;
    int x=0;
    f=f+s[0];
    for(int i=2; i<n; i++){
         x=x+i;
         if(x>n){
            break;
         }
       f=f+s[x]; 
    }
    cout<<f<<endl;
    return 0;
}