#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{

    int n;
    cin >> n;

    int arr[n + 1] = {0};
    int dp[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
    }
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        int mx = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                int d = j;
                int d2 = i / j;

                if (arr[d] < arr[i])
                {
                    mx = max(mx, dp[d]);
                }
                if (arr[d2] < arr[i])
                {
                    mx = max(mx, dp[d2]);
                }
            }
        }
        dp[i] += mx;
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}