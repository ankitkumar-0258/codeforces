#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    long long  n;
    cin>>n;
    long long x=0;
    long long r=0;
    long long count=0;
    long long bount =0;
    string s;
    while(n>0){
        r=n%10;
        if(r==4||r==7){
             count++;
        }
        n=n/10;
    }
      
       if(count==7||count==4){
        s="YES";
       }
    else{
        s="NO";
    }
    cout<<s;
    
    return 0;
}