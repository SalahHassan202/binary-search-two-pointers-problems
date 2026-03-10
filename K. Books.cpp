// K. Books

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, l = 0, ans = 0;
    for (ll r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum > t)
        {
            sum -= v[l];
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans;
}

int main()
{
    fast;

    solve();

    return 0;
}