#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int window = 1;
        while ((window * arr[i] < x))
        {

            window++;
            i--;
            if ((window > n) || (i < 0))
                break;
        }
        if(i==-1)break;
        if (window * arr[i] >= x)
        {
          
            ans++;
      
        }
    }

    cout << ans << endl;
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