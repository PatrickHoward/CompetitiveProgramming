#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x;
    int ok;
    ok = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ok += ok ^ x;
    }
    if (n == 1)
    {
        cout << x << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}