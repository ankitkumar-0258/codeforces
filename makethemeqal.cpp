#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
        int a;
        char c;
        cin>>a>>c;
        string s;
        cin>>s;
        vector<int>temp;
        for(int i=0; i<n; i++){
             if(s[i]!=c){
                int x=i+1;
                temp.push_back(x);
                for(int i=x; i<=n; i+=x){
                    s[i-1]=c;
                }
             }
        }
        if(temp.size()==0){
             cout<<0<<endl;
             continue;
        }
        for(int i=0; i<temp.size(); i++){
             cout<<temp[i]<<" ";
        }
        cout<<endl;
     }
    return 0;
}