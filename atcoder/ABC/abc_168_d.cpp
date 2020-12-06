#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> grid[n + 1];
    while (m)
    {
        int a, b;
        cin >> a >> b;
        grid[a].push_back(b);
        grid[b].push_back(a);
        --m;
    }

    int path[n + 1];
    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        path[i] = -1;
    }

    q.push(1);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (auto i : grid[x])
        {
            if (path[i] == -1)
            {
                path[i] = x;
                q.push(i);
            }
        }
    }
    bool valid = true;
    for (int i = 2; i <= n; i++)
    {
        if (path[i] == -1)
            valid = false;
    }

    if (!valid)
        cout << "No" << endl;
    else
    {
        cout << "Yes" << endl;
        for (int i = 2; i <= n; i++)
        {
            cout << path[i] << endl;
        }
    }
}

int main()
{
    init();
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}