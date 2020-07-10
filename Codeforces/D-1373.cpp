#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    ll even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 2 == 0)
            even_sum += arr[i];
    }
    ll prevSum = 0;
    ll maxSum = 0;
    for (int i = 1; i < n; i += 2)
    {
        prevSum = max(prevSum + arr[i] - arr[i - 1], 0ll);
        maxSum = max(maxSum, prevSum);
    }
    prevSum = 0;

    for (int i = 1; i < n - 1; i += 2)
    {
        prevSum = max(prevSum + arr[i] - arr[i + 1], 0ll);
        maxSum = max(maxSum, prevSum);
    }
    cout << even_sum + maxSum << endl;
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