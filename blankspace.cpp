#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        vector<int>temp(a);
        for(int j=0; j<a; j++){
            cin>>temp[j];
        }
        int maxi=0;
        int count =0;
        for(int i=0; i<temp.size(); i++){
            if(temp[i]==0){
                count++;
            }
            else {
                maxi=max(count ,maxi);
                count=0;
            }
        }
           maxi=max(count,maxi);
        cout<<maxi<<endl;;
    }
    return 0;
}