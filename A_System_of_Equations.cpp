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
    cout.tie(NULL);
    int m, n;
    cin >> m >> n;
    if (m > n) {
        swap(m, n);
    }
    int cnt = 0;
    for (int i = sqrt(m);i >= 0;i--) {
        int b = m - pow(i, 2);


        if ((i + (b * b)) == n) {
            cnt++;
        }

    }
    cout << cnt << endl;


    return 0;
}