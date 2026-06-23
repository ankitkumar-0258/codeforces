#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b,c;
    vector<int>temp;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
        sort(temp.begin(),temp.end());
        cout<<temp[1]<<endl;
         temp.clear();
    }
    return 0;
}