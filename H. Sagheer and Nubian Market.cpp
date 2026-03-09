// H. Sagheer and Nubian Market

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    ll l = 0, r = n;
    ll x = 0;
    ll y = 0;

    while (l <= r)
    {
        ll k = (l + r) / 2;
        vector<ll> ok(n);
        for (int i = 1; i <= n; i++)
        {
            ok[i - 1] = v[i] + 1LL * i * k;
        }

        sort(ok.begin(), ok.end());

        ll sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += ok[i];
        }

        if (sum <= s)
        {
            y = k;
            x = sum;
            l = k + 1;
        }
        else
        {
            r = k - 1;
        }
    }

    cout << y << " " << x << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}