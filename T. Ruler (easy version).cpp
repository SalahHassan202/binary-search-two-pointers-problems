// T. Ruler (easy version)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll l = 2, r = 999;
    ll ans = 999;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        cout << "? " << mid << " " << 1 << endl;

        ll a;
        cin >> a;
        if (a > mid)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << "! " << ans << endl;
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