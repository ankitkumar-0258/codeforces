#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    int bount=0;
    string s;
    for(int i=0; i<n; i++){
        cin>>s;
      for(int i=0; i<5; i++){
        if(s[i]=='A'){
            count++;
        }
        else{
            bount++;
        }
      }
      if(count>bount){
         cout<<'A'<<endl;
      }
      else{
        cout<<'B'<<endl;
      }
      
      count=0;
      bount=0;
    }
    
    return 0;
}