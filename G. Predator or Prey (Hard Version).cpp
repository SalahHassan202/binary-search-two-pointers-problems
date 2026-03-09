// G. Predator or Prey (Hard Version)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> p(n);
    for (auto &x : p)
    {
        cin >> x;
    }
    vector<ll> v = p;
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        ll x = p[i];
        ll l1 = x - b + 1;
        ll r1 = x - a;
        ll l2 = x + a;
        ll r2 = x + b - 1;
        ll y = upper_bound(v.begin(), v.end(), r1) - lower_bound(v.begin(), v.end(), l1);
        ll z = upper_bound(v.begin(), v.end(), r2) - lower_bound(v.begin(), v.end(), l2);
        cout << z << " " << y << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}