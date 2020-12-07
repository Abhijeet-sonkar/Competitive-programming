#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> cord(n);
    ll a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cord[i].first = a;
        cord[i].second = b;
    }
  
    bool valid = false;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            int x1 = cord[i].first;
            int y1 = cord[i].second;
            int x2 = cord[j].first;
            int y2 = cord[j].second;

            ll dis = abs(x1-x2)+abs(y1-y2);
            if (dis <= k)
                count++;
        }
        if (count == n)
            valid = true;
    }
    if (valid)
        cout << "1" << endl;
    else
    {
        cout << "-1" << endl;
    }
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
