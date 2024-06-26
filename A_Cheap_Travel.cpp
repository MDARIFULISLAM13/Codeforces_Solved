/**
 *
 * Author : Md.Ariful Islam
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
    {
        cout << n * a << endl;
        return 0;
    }
    ll sum = (n / m) * b;
    if (b > (n % m) * a)
        sum += (n % m) * a;
    else
        sum += b;
    cout << sum << endl;
    return 0;
}
