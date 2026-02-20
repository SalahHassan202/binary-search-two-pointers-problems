// C. Eating Queries

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    vector<ll> pref(n);
    pref[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    while (q--)
    {
        ll x;
        cin >> x;

        auto it = lower_bound(pref.begin(), pref.end(), x);

        if (it == pref.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (it - pref.begin() + 1) << endl;
        }
    }
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