/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-04-2025
 * time : 06:49:20
 * Problem Name : C_Building_Permutation
 *
 **/
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
    ll n;
    cin >> n;
    vec a(n + 1);
    a[0] = -1e18;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += abs(a[i] - i);
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}