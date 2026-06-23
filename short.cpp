#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string t;
    for(int i=0; i<n; i++){
        cin>>t;
        if(t=="abc"||t=="cba"||t=="bac"||t=="acb"){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}