#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    vector<int>h=temp;
    sort(h.begin(),h.end());
    int x=0;
    int y=0;
    for(int i=0; i<h.size(); i++){
        if(h[0]==temp[i]){
             x=i+1;
             break;
        }
      
    } 

     for(int i=0; i<h.size(); i++){
        if(h[h.size()-1]==temp[i]){
            y=i+1;
            break;
        }
     }
     cout<<x<<" "<<y<<endl;

    return 0;
}