#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    vector<int>temp(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    stack<int>st;
    st.push(-1);
    for(int i=n-1; i>=0; i--){
        int curr=nums[i];
        while(!st.empty()&&st.top()<=curr){
            st.pop();
        }
       temp[i]=st.top();
        st.push(curr);
    }
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}