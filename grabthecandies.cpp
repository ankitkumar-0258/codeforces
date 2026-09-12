#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&temp){
     int n=temp.size();
     int osum=0;
     int esum=0;
     for(int i=0; i<n; i++ ){
        if(temp[i]%2!=0){
            osum+=temp[i];
        }
        else{
            esum+=temp[i];
        }
     }

     if(esum>osum){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
}

int main() {
     int n;
     cin>>n;
     while(n--){
        int a;
        cin>>a;
        vector<int>temp(a);
        for(int i=0; i<a; i++){
            cin>>temp[i];
        }

        solve(temp);
     }
    return 0;
}