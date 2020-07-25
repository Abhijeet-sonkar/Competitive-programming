#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1]={0};
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        m = max(m, arr[i]);
    }
    m++;
    char  ans[n+1][m];
    for (int i = 0; i < m; i++)
    {
        ans[0][i] = 'a';
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            ans[i][j] = ans[i - 1][j];
        }
        ans[i][arr[i]] = ans[i - 1][arr[i]] == 'a' ? 'x' : 'a';
        for (int j = arr[i] + 1; j < m; j++)
        {
            ans[i][j] = 'a';
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
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