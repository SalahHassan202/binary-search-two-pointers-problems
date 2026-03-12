// P. Kefa and Company

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<pair<ll, ll>> c(a);
    for (ll i = 0; i < a; i++)
    {
        cin >> c[i].first >> c[i].second;
    }
    sort(c.begin(), c.end());

    ll l = 0, s = 0, ans = 0;
    for (ll r = 0; r < a; r++)
    {
        s += c[r].second;
        while (c[r].first - c[l].first >= b)
        {
            s -= c[l].second;
            l++;
        }
        ans = max(ans, s);
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}