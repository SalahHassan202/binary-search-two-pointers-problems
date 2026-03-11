// L. One-Dimensional Battle Ships

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll h(ll b, ll a)
{
    return (b + 1) / (a + 1);
}

void solve()
{
    ll n, k, a;
    cin >> n >> k >> a;
    ll m;
    cin >> m;
    set<ll> s;
    s.insert(0);
    s.insert(n + 1);
    ll tot = h(n, a);

    for (int i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        auto it = s.lower_bound(x);
        ll r = *it;
        it--;
        ll l = *it;

        tot -= h(r - l - 1, a);
        tot += h(x - l - 1, a);
        tot += h(r - x - 1, a);

        s.insert(x);

        if (tot < k)
        {
            cout << i << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}