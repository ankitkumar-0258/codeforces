#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    
    for(int i=0; i<n; i++){
         cin>>a;
        if(a%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            vector<int>temp;
          for(int i=2; i<=a; i+=2){
                temp.push_back(i);
          }
          int x=1;
          for(int i=1; i<a-2; i+=2){
            temp.push_back(i);
          }
          temp.push_back(a+a/2-1);
        for(int i=0; i<temp.size(); i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}