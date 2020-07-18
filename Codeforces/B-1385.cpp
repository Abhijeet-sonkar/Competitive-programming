#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int a = 0;
    vector<int> ans;
    map<int, int> m;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a;
        m[a]++;
        if (m[a] == 1)
            ans.push_back(a);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }

    cout << endl;
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