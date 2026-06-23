#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);
    sort(temp.begin(),temp.end());
    cout<<(temp[1]-temp[0]+temp[2]-temp[1]);
    return 0;
}