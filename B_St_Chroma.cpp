/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-04-2025
 * time : 20:45:09
 * Problem Name : B_St_Chroma
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
    ll n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        if(i!=x){
            cout << i << " ";
        }
    }
    if(x<n){
  cout << x << endl;
    }
    else
        cout << endl;
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