#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0;
    int count=0;
    int x=n;
    vector<int>temp;
    while(a<=n){
      a=a+2;
      if(a>n){
        break;
      }
       x=x-2;
      temp.push_back(2);
      count++;
    }
    if(x>0){
      temp.pop_back();
      temp.push_back(3);
    }
    cout<<count<<endl;
    for(int i=0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}