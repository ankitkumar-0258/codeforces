#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        int x=0;
        vector<int>temp(a);
        for(int j=0; j<a; j++){
            cin>>temp[j];
        } 
        vector<int>hemp;
          hemp.push_back(temp[0]);
        for(int k=0; k<a-1; k++){
            hemp.push_back((temp[k+1]-temp[k]));
        }
        hemp.push_back(2*(b-temp[a-1]));
        sort(hemp.begin(),hemp.end());
        cout<<hemp[hemp.size()-1]<<endl;
    }
    return 0;
}