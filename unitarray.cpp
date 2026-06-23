#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        vector<int>temp(a);
        for(int j=0; j<a; j++){
            cin>>temp[j];
        }
        int count=0;
        int bount=0;
        int shount=0;
        for(int k=0; k<a; k++){
            if(temp[k]==-1){
                count++;
            }
            else{
                bount++;
            }
        }
       while(count>bount){
        count--;
        bount++;
        shount++;
       }
       if(count%2!=0){
        shount++;
       }
       cout<<shount<<endl;
    }
    return 0;
}