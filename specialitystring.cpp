#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    int a;
    for(int j=0; j<n; j++){
        cin>>a;
        cin>>s;
    for (int i = 0; i <a;) {
        if (s[i] == s[i+1]) {
            s.erase(i, 2); 
            if(i>0) 
             i=0;    
        }
        else{
            i++;
        }
    }
    if(s.size()==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}
