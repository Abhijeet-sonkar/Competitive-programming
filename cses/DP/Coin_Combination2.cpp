#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int sumSet[101][1000001];
void init()
{
    for (int subSum = 0; subSum < 100001; subSum++)
    {
        for (int i = 0; i < 101; i++)
        {
            if (i == 0)
            {
                if (subSum == 0)
                    sumSet[i][subSum] = 1;
                else
                {
                    sumSet[i][subSum] = 0;
                }
            }
            if (subSum == 0)
                sumSet[i][subSum] = 1;
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            sumSet[i][j] = sumSet[i - 1][j];
            if (j - arr[i - 1] >= 0)
            {
                sumSet[i][j] = (sumSet[i][j - arr[i - 1]] + sumSet[i][j])%mod;
            }
        }
    }

    cout << sumSet[n][m] << endl;
}

int main()
{
    init();
    solve();

    return 0;
}