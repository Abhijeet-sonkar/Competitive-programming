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
    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int last = 0;
    int j = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {

        if (i > 0 && a[i] == a[i - 1])
        {
            ans+=last;
            continue;
        }
        last = 0;
        while (j < m && b[j] <= a[i])
        {
            if (b[j] == a[i])
                last++;
            j++;
        }

        ans += last;

        /* code */
    }
    cout<<ans<<endl;
}

int main()
{
    init();
    int t = 1;
    //cin>>t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}