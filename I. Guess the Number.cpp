// I. Guess the Number

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll l = 1, r = 1000000;
    while (l < r)
    {
        ll mid = (l + r + 1) / 2;
        cout << mid << endl;
        string s;
        cin >> s;
        if (s == "<")
        {
            r = mid - 1;
        }
        else
        {
            l = mid;
        }
    }

    cout << "! " << l << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}