#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string t;
int x=0;
for(int i=0; i<n; i++){
    cin>>t;
    x=t.size();
    if(x<=10){
        cout<<t<<endl;
    }
    else {
        cout<<t[0]<<t.size()-2<<t[x-1]<<endl;
    }
}
return  0;
}