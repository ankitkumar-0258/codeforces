#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> s(4);
    for(int i = 0; i < 4; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    if ((s[0] + s[1] > s[2]) || (s[1] + s[2] > s[3])) {
        cout <<"TRIANGLE"<< endl;
    } 
    else if ((s[0] + s[1] == s[2]) || (s[1] + s[2] == s[3])) {
        cout <<"SEGMENT"<< endl;
    } 
    else {
        cout <<"IMPOSSIBLE"<< endl;
    }
    return 0;
}