#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char t;
    for(int i=0; i<n; i++){
       cin>>t;
       if(t=='c' ||t=='o'||t=='d'||t=='e'||t=='f'||t=='r'||t=='e'||t=='s'){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}