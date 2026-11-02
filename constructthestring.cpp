#include <bits/stdc++.h>
using namespace std;

  void solve(int a, int b, int c){

        string s;
         char x='a';
          int y=a;
          int i=0;
         while(a--){
            s+=x;
            x++;
             i++;
            if(i>=26){
                x='a';
            }
           
         }

         cout<<s<<endl;
  }
int main() {
      int n;
      cin>>n;
      while(n--){
         int a,b,c;
         cin>>a>>b>>c;
         solve(a,b,c);

 }
    return 0;
}