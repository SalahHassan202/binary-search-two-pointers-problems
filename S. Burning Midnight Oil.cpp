// S. Burning Midnight Oil

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool salah(ll a, ll b, ll c)
{
    ll s = 0;
    while (a > 0)
    {
        s += a;
        a /= b;
    }
    return s >= c;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll l = 1, r = a, ans = a;

    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (salah(m, b, a))
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
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