#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     int a;
     while(n--){
      cin>>a;
      vector<int>temp(a);
      for(int j=0; j<a; j++){
         cin>>temp[j];
      }
      int count=0;
      int bount=0;
      for(int i=0; i<a; i++){
        if(temp[i]%2==0&&i%2!=0){
             count++;
        }
        else if(temp[i]%2!=0&&i%2==0){
          bount++;
        }
      }
     
      if(count==bount){
         cout<<count<<endl;
      }
      else{
        cout<<-1<<endl;
      }
      
     }
    return 0;
}