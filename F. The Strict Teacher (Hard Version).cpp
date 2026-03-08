// F. The Strict Teacher (Hard Version)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> b(m);
    for (auto &x : b)
    {
        cin >> x;
    }
    sort(b.begin(), b.end());

    while (q--)
    {
        ll a;
        cin >> a;
        auto it = lower_bound(b.begin(), b.end(), a);

        if (it == b.begin())
        {
            cout << (*it) - 1 << endl;
        }
        else if (it == b.end())
        {
            cout << n - b.back() << endl;
        }
        else
        {
            ll r = *it;
            ll l = *(it - 1);
            cout << (r - l) / 2 << endl;
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
