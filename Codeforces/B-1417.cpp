#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int visited[n] = {0};
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    map<int, int> color;
    for (int i = 0; i < n; i++)
    {
        color[arr[i]] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (color[arr[i]] == -1)
        {
            color[arr[i]] = 1;
            if (m[k - arr[i]] > 0)
            {
                color[k - arr[i]] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << color[arr[i]] << " ";
        if (arr[i] == (k - arr[i]))
        {
            color[arr[i]] = (color[arr[i]] == 1) ? 0 : 1;
        }
    }
    cout << endl;
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