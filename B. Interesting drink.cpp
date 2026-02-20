// B. Interesting drink

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
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        ll m;
        cin >> m;
        ll ans = upper_bound(v.begin(), v.end(), m) - v.begin();

        cout << ans << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}