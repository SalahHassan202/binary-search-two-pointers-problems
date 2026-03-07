// E. Worms

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> pref(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pref[i];
        if (i)
        {
            pref[i] += pref[i - 1];
        }
    }

    ll m;
    cin >> m;
    while (m--)
    {
        ll q;
        cin >> q;
        ll x = lower_bound(pref.begin(), pref.end(), q) - pref.begin();

        cout << x + 1 << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}