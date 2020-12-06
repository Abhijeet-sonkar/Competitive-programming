#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll ans = arr[n - 1];

    int end = n - 2;
    int index = n - 2;
    int count = (n - 2)/2;
    while (count > 0)
    {
     
        ans += 2 * arr[index];
        index--;
        count -= 1;
    }
    
    if ((n-2)%2 != 0)
        ans += arr[index];

    cout << ans << endl;
}

int main()
{

    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}