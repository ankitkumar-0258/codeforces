#include <bits/stdc++.h>
using namespace std;

   void solve(string s){
        int n= s.size();
        vector<int>temp;
        vector<int>hemp;
        set<char>st;
        for(int i=0; i<n; i++){
            st.insert(s[i]);
             temp.push_back(st.size());
        }

        st.clear();
        for(int i=n-1; i>=0; i--){
            st.insert(s[i]);
            hemp.push_back(st.size());
        }
          reverse(hemp.begin(), hemp.end());
        int maxi=0;
        for(int i=0; i<n-1; i++){
           maxi=max(maxi, temp[i]+hemp[i+1]);
        }

        cout<<maxi<<endl;
   }
int main() {
      int n;
      cin>>n;
      while(n--){
         int a;
         cin>>a;
         string s;
         cin>>s;
         solve(s);
      }
    return 0;
}