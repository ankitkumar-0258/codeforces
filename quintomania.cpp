#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&temp){
     int n=temp.size();

     bool is=true;
      for(int i=0; i<n-1; i++){
       
            int diff = abs(temp[i]-temp[i+1]);
            if(diff != 5 && diff != 7){
                is = false;
                break;
            
        }
        
    }

         if(!is){
             cout<<"NO"<<endl;
             return ;
         }

     if(is){
        cout<<"YES"<<endl;
     }
}
int main() {
      int n;
      cin>>n;
      while(n--){
         int a;
         cin>>a;
         vector<int>temp(a);
         for(int i=0; i<a; i++){
             cin>>temp[i];


         }

         solve(temp);
      }
    return 0;
}