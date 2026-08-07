#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
   vector<string>temp;
    int x=n;
    while(n--){
         cin>>s;
      temp.push_back(s);
    }
    map<string,int>mpp;
    vector<string>hemp;
    for(int i=0; i<temp.size(); i++){
        mpp[temp[i]]++;
        if(mpp[temp[i]]>1){
           hemp.push_back()
        }
    }
    
    return 0;
}