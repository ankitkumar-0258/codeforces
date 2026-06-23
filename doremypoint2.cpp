#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;  
    while(n--) {
        int a;
        cin >> a;
        vector<int> temp(a);
        for(int i = 0; i < a; i++) {
            cin >> temp[i];
        }
        vector<int> hemp;
        for(int j = 0; j < a - 1; j =j+ 2) {
            int sum = temp[j] + temp[j+1];
            hemp.push_back(sum);
        }
        if(a % 2 != 0) {
            hemp.push_back(temp[a-1]);
        }
        bool y =1;
        for(int m = 0; m <hemp.size() - 1; m++) {
            if(hemp[m] != hemp[m+1]) {
                y= 0;
                break;
            }
        }
        if(y==1) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}
