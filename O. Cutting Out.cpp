// O. Cutting Out

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool f(vector<ll> &a, ll b, ll c, vector<ll> &d)
{
    ll e = 0;
    for (ll i = 1; i < (ll)d.size(); i++)
    {
        e += d[i] / b;
    }
    return e >= c;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> c(a);
    vector<ll> d(200001, 0);

    for (auto &e : c)
    {
        cin >> e;
        d[e]++;
    }

    ll l = 1, r = a, ans = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;

        if (f(c, m, b, d))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    vector<ll> t;
    for (ll i = 1; i <= 200000 && (ll)t.size() < b; i++)
    {
        ll x = d[i] / ans;
        while (x-- && (ll)t.size() < b)
        {
            t.push_back(i);
        }
    }

    for (auto x : t)
    {
        cout << x << " ";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}