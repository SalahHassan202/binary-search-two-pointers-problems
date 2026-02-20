// A. Queries about less or equal elements

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
    vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++)
    {
        ll ans = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << ans << " ";
    }
}
int main()
{
    fast;

    solve();

    return 0;
}