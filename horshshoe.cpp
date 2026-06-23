#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);
    temp.push_back(d);
    sort(temp.begin(),temp.end());
    int count=0;
    for(int i=0; i<3; i++){
        if(temp[i]==temp[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}