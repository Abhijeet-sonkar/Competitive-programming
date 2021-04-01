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
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int inc[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        inc[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                inc[i] = max(inc[i], inc[j] + 1);
            }
        }
    }

    cout << inc[n - 1] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}