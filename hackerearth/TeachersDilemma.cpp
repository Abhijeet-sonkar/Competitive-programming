#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int parent[1000001];
int find(int a)
{
    if (parent[a] < 0)
        return a;

     int x=find(parent[a]);
     parent[a]=x;
    return x;
}
int Union(int a, int b)
{
    parent[a] += parent[b];
    parent[b] = a;
}

void solve()
{
    int n, m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
    }
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        a = find(a);
        b = find(b);
        if (a != b)
        {
            Union(a, b);
        }
    }
    ll answer = 1;
    for (int i = 1; i <= n; i++)
    {
        if (parent[i] < 0)
            answer = (answer * (abs(parent[i]))) % mod;
    }

    cout << answer << endl;
}

int main()
{

    solve();

    return 0;
}