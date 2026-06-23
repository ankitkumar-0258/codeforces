#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
     cin>>s;
    int count =0;
    int bount =0;
    for(int i=0; i<n; i++){
       if(s[i]=='A'){
        count++;
       }
       else{
        bount++;
       }
    }
    if(count>bount){
        cout<<"Anton";
    }
    else if(bount>count){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}