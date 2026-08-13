#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string >temp(n);
    map<string,int>mpp;
    vector<string>hemp;
    for(int i=0; i<n; i++){
       cin>>temp[i];
    }
    for(int i=0; i<n; i++){
        mpp[temp[i]]++;
        if(mpp[temp[i]]==1){
             hemp.push_back("OK");
        }
        else{
             string t= to_string(mpp[temp[i]]-1);
            hemp.push_back(temp[i]+t);
        }
    }
    for(int i=0; i<hemp.size(); i++){
         cout<<hemp[i]<<" "<<endl;;
    }
    return 0;
}