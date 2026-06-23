#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a,b;
  int x=0;
  for(int i=0; i<n; i++){
    cin>>a>>b;
      int x=a/b;
      if(a%b!=0){
      cout<<b*(x+1)-a<<endl;
      }
      else{
        cout<<a%b<<endl;
      }
  }

    return 0;
}