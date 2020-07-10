#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    ll dp[100001][3] = {0};
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});

        dp[i][1] = arr[i - 1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = arr2[i - 1] + max(dp[i - 1][0], dp[i - 1][1]);
    }

    cout << max({dp[n][0], dp[n][2], dp[n][1]}) << endl;
}

int main()
{

    solve();

    return 0;
}