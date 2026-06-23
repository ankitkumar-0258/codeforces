#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count =0;
    while(n!=0){
       if(n>=1&&n<2){
        n=n-1;
       }
       if(n>=2&&n<3){
        n=n-2;
       }
       if(n>=3&&n<4){
        n=n-3;
       }
       if(n>=4&&n<5){
         n=n-4;
       }
       if(n>=5){
        n=n-5;
       }
       count++;
    }
    cout<<count;
    return 0;
}