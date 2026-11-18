void solve(vector<int>& a){
    int n = a.size();

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        if(a[i] <= 2*n)
            v.push_back({a[i], i+1}); // value , position
    }

    sort(v.begin(), v.end());

    long long ans = 0;

    int m = v.size();

    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){

            long long prod = 1LL*v[i].first*v[j].first;

            if(prod > 2*n) break;

            if(prod == v[i].second + v[j].second)
                ans++;
        }
    }

    cout << ans << '\n';
}