// M. String Game

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

string t, p;
vector<ll> v;

bool can(ll k)
{

    vector<bool> r(t.size(), false);

    for (ll i = 0; i < k; i++)
    {
        r[v[i] - 1] = true;
    }

    ll j = 0;

    for (ll i = 0; i < t.size(); i++)
    {
        if (!r[i] && t[i] == p[j])
        {
            j++;
        }

        if (j == p.size())
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    cin >> t >> p;
    ll n = t.size();
    v.resize(n);

    for (ll &x : v)
    {
        cin >> x;
    }

    ll l = 0, r = n, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (can(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}