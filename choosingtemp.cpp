#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ,a;
    cin>>n>>a;
    int x;
    int count=0;
    int b=0;
     for(int i=0; i<n; i++){
        cin>>x;
        if(x+a<=5){
            count++;
            if(count==3){
                b++;
                count=0;
            }
        }
     }
     cout<<b<<endl;
     
    return 0;
}