#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin>>n>>k;
    if (k >= n)
        cout << "1" << endl;
    else
    {
        int ans = n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if(i<=k)
                ans=min(ans,n/i);
                if(n/i<=k)
                ans=min(ans,i);

            }
        }
        cout<<ans<<endl;
        
    }
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