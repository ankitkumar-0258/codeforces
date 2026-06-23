#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    // Check if n is a power of 2
    // If n & (n - 1) is 0, it has NO odd divisors
    if ((n & (n - 1)) == 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}