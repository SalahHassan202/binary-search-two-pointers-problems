// D. Magic Powder - 2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll l = 0, r = 2e9, ans = 0;

    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll ok = 0;

        for (int i = 0; i < n; i++)
        {
            ll x = mid * a[i];
            if (x > b[i])
            {
                ok += x - b[i];

                if (ok > k)
                {
                    break;
                }
            }
        }

        if (ok <= k)
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