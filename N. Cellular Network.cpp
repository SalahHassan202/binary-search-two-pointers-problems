// N. Cellular Network

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> c(n), t(m);

    for (auto &x : c)
    {
        cin >> x;
    }
    for (auto &x : t)
    {
        cin >> x;
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(t.begin(), t.end(), c[i]);
        ll d1 = LLONG_MAX, d2 = LLONG_MAX;

        if (it != t.end())
        {
            d1 = abs(*it - c[i]);
        }

        if (it != t.begin())
        {
            it--;
            d2 = abs(*it - c[i]);
        }
        ans = max(ans, min(d1, d2));
    }

    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}