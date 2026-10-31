#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int r, s, p;
        cin >>r >> s >> p;

        int sum = r + s + p;

        int a = 0, b = 0, c = 0;
        string ans = "";
        while (ans.size() < sum)
        {
            if (s >= p)
            {
            ans += 'R';
            }
            else if (p >= r)
            {
            ans += 'S';
            }
            else
            {
            ans += 'P';
            }
        }
        cout << ans << endl;
    }

    return 0;
}