#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string t;
    for(int i=0; i<n; i++){
       cin>>t;
       int x=t[0]-48+t[2]-48;
       cout<<x<<endl;
    }
    return 0;
}