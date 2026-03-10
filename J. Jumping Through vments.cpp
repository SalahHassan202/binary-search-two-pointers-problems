// J. Jumping Through vments

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool ok(ll k, vector<pair<ll, ll>> v)
{
    ll x = 0, y = 0;
    for (auto [l, r] : v)
    {
        ll w = max(l, x - k);
        ll z = min(r, y + k);

        if (w > z)
        {
            return false;
        }
        x = w;
        y = z;
    }

    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    ll l = 0, r = 1e9, ans = r;
    while (l <= r)
    {

        ll mid = (l + r) / 2;
        if (ok(mid, v))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}