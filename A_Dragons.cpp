#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= arr[i].first)
        {
            cout << "NO\n";
            return 0;
        }
        else
        {
            s += arr[i].second;
        }
    }
    cout << "YES\n";
    return 0;
}