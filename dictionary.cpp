#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
        string a;
        cin>>a;
        char x=a[0];
        char y=a[1];
        int z=(x-'a')*25;
        if(y>x){
            z+=(y-'a');
        }
        else{
            z+=(y-'a'+1);
        }

        cout<<z<<endl; 
     }
    return 0;
}