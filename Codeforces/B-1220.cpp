#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    ll arr[1001][1001];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<ll> ans;
    for (int i = 1; i <= n; i++)
    {
        if (i <= n - 2)
        {
            ll prod = arr[i][i + 1] * arr[i][i + 2];
            prod = prod / arr[i + 1][i + 2];
            prod = sqrt(prod);
            ans.push_back(prod);
        }
        else if(i==n)
        {
            ll prod = arr[i][1] * arr[i][2];
            prod = prod / arr[1][2];
            prod = sqrt(prod);
            ans.push_back(prod);
        }
        else
        {
              ll prod = arr[i][1] * arr[i][n];
            prod = prod / arr[1][n];
            prod = sqrt(prod);
            ans.push_back(prod);
        }
        
    }
   
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    solve();

    return 0;
}