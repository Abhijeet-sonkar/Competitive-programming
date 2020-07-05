#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
struct edge
{
    int a;
    int b;
    int w;
};
edge arr[100001];
int parent[100001];

int find(int a)
{
    if (parent[a] == -1)
        return a;

    return parent[a] = find(parent[a]);
}
void Union(int a, int b)
{

    parent[b] = a;
}

bool comp(edge a, edge b)
{
    if (a.w < b.w)
        return true;

    return false;
}
void solve()
{

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> arr[i].a >> arr[i].b >> arr[i].w;
    }
    sort(arr, arr + m + 1, comp);
    int a, b;
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {

        a = find(arr[i].a);

        b = find(arr[i].b);

        if (a != b)
        {
            sum += arr[i].w;

            Union(a, b);
        }
    }

    cout << sum << endl;
}

int main()
{
    solve();

    return 0;
}