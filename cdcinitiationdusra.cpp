#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n;
    int sum=0;
    for(int i=0; i<t; i++){
        cin>>n;
         sum=sum+n;
    }
    for(int i=0; i<sum; i++){
        cout<<"CDC"<<endl;
    }
    return 0;
}