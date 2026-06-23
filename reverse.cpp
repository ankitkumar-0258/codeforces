#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+(n-d));
    reverse(arr.begin()+n-d,arr.end());
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}