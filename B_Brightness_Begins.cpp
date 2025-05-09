/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-04-2025
 * time : 09:54:26
 * Problem Name : B_Brightness_Begins
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
    ll k;
    cin >> k;
    ll x = sqrt(k);
    k += x;
    ++x;

    while (1)
    {
        if (x * x > k)
        {
            cout << k << " \n";
            return;
        }
        k += 1;
        ++x;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}