/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-09-2024
 * time : 03:53:28
 *
 **/
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    vec a(t);
    for (auto i = 0;i < t;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int out = 1;
    for (int i : a) {
        if (i != out) {
            cout << out << endl;
            return 0;
        }
        out++;
    }
    cout << out << endl;
    return 0;
}