/**
 *
 * Author : Md.Ariful Islam
 * Date : 05-07-2024
 * time : 07:28:16
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
void arif() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int m = unique(s.begin(), s.end()) - s.begin();
    int maxi = a * n + ((b >= 0) ? (b * n) : (b * (m / 2 + 1)));
    cout << maxi << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;
    while (t--) {
        arif();
    }
    return 0;
}