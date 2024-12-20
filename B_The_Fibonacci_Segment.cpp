/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-09-2024
 * time : 13:44:55
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

    int t;
    cin >> t;
    vec a(t);
    for (int i = 0;i < t;i++) {
        cin >> a[i];
    }
    int ans = 0;
    if (t <= 2) {
        ans = t;
    }
    else {
        ans = 2;
    }
    int pre = 2;
    for (int i = 2;i < t;i++) {
        if (a[i - 1] + a[i - 2] == a[i]) {
            pre++;
            ans = max(pre, ans);
        }
        else {
            pre = 2;
        }
    }

    cout << ans;
    return 0;
}