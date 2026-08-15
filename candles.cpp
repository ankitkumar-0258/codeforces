#include <bits/stdc++.h>
using namespace std;
int main() {
     int a,b;
     cin>>a>>b;
     int x=a;
     int y=a;
     while(y>=b){
         x+=y/b;
         y=y/b+ y%b;
     } 
       cout<<x<<endl;
    return 0;
}