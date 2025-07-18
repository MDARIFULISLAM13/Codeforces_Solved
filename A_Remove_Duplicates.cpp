/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2025
 * time : 18:03:10
 * Problem Name : A_Remove_Duplicates
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vec a(t);
    for (int i = 0; i < t; i++)
        cin >> a[i];

    map<int, bool> mp;

    vec v;

    reverse(a.begin(), a.end());
    for (auto i : a)
    {
        if (mp[i] == 0)
        {
            mp[i] = 1;
            v.push_back(i);
        }
    }
    cout << v.size() << endl;
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << " ";

        return 0;
}