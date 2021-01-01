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

    map<int, int> f;
    int a;
    set<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (f[a] > 0)
        {
            ans.insert(a + 1);
            f[a+1]++;
        }
        else
        {
            ans.insert(a);
            f[a]++;
        }
        
      
    }

    cout << ans.size() << endl;
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