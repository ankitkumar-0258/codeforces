#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
      cin>>n;
      int x=0;
      int t=0;
      if(n%4==0||n%7==0||n%444==0||n%774==0||n%747==0||n%777==0||n%44==0||n%77==0||n%744==0||n%447==0||n%47==0||n%477==0){
        cout<<"YES"<<endl;
      }
       else{
        while(n!=0){
            x=n%10;
            if(x==7||x==4){
                 n=n/10;
            }
            else{
                t=-1;
                break;
            }
        }
        if(t==-1){
             cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       }
    return 0;
}