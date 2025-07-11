#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    ll val[64];
    mem(val, 0);

    for (int i = 0; i < n; i++)
    {
        bitset<63> bit_a = a[i];

        for (auto i = 0; i <= 63; i++)
        {
            if (bit_a[i])
                ++ans;
            else
                val[i + 1]++;
        }
    }
    ll cnt = 1;
    for (int i = 1; i < 64; i++)
    {
        ll mx = val[i] * cnt;
        if (k >= mx)
        {
            k -= mx;
            ans += val[i];
        }
        else
        {
            ll xx = k / cnt;
            ans += xx;
            break;
        }

        cnt *= 2;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}