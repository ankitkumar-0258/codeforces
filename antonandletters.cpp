#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    vector<char>temp;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=97&&s[i]<=122){
            temp.push_back(s[i]);
        }
    }
    map<char,int>mpp;
    for(int i=0; i<temp.size(); i++){
        mpp[temp[i]]++;
    }
    int count=0;
    for(auto it : mpp){
        count++;
    }
    cout<<count<<endl;
    return 0;
}