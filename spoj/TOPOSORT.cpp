#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
const int maxSize = 1000001;
vector<int> graph[maxSize];
int in[maxSize];
vector<int> res;
bool kahn(int n)
{
    priority_queue<int, vector<int>, greater<int>> nodes;
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
            nodes.push(i);
    }
    while (!nodes.empty())
    {
        int cur = nodes.top();
        res.push_back(cur);
        nodes.pop();

        for (auto child : graph[cur])
        {
            in[child]--;
            if (in[child] == 0)
                nodes.push(child);
        }
    }

    return res.size() == n;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        in[b]++;
    }

    if (!kahn(n))
        cout << "Sandro fails." << endl;
    else
    {
        for (auto num : res)
        {
            cout << num << " ";
        }
    }
}

int main()
{

    solve();

    return 0;
}