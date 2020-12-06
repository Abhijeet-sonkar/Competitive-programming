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
    int arr[n];
    ll sum = 0;
    map<int, int> num;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        num[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q)
    {
        int a, b;
        cin >> a >> b;

        sum += (b - a) * num[a];

        num[b] += num[a];
        num[a] = 0;

        cout<<sum<<endl;
        --q;
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