#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s="";
    int t=0;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s=="Tetrahedron"){
           t=t+4;
        }
        else if(s=="Cube"){
            t=t+6;
        }
        else if(s=="Octahedron" ){
            t=t+8;
        }
        else if(s=="Dodecahedron" ){
            t=t+12;
        }
        else if(s=="Icosahedron"){
            t=t+20;
        }
    }
    cout<<t;
    return 0;
}