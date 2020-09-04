#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[n] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[i] = s[i] - '0' - 1;
    }

    map<ll, ll> count;
    int curSum = 0;
    ll ans = 0;
    count[0] = 1;
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        ans += count[curSum];
        count[curSum]++;
    }

    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}