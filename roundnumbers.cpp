#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n ; i++){
         cin>>a;
        vector<int>temp;
        int x=a/10000;
        if(x!=0){
            temp.push_back(x*10000);
        }
        a=a%10000;
        int y=a/1000;
        if(y!=0){
          temp.push_back(y*1000);
        }
        a=a%1000;
        int z=a/100;
        if(z!=0){
            temp.push_back(z*100);
        }
        a=a%100;
        int p=a/10;
        if(p!=0){
        temp.push_back(p*10);
        }
        int q=a%10;
        if(q!=0){
        temp.push_back(q);
        }
        cout<<temp.size()<<endl;
        for(int j=0; j<temp.size(); j++){
             cout<<temp[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}