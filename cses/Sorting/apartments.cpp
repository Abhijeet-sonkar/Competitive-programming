#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> app(n);
    vector<int> avail(m);
    for (int i = 0; i < n; i++)
    {
        cin>>app[i];
    }
       for (int i = 0; i < m; i++)
    {
        cin>>avail[i];
    }
    sort(app.begin(),app.end());
    sort(avail.begin(),avail.end());

    int ans=0;
    int x=0;
    int y=0;
    while(x<n&&y<m)
    {
        if(abs(app[x]-avail[y])<=k)
        {
            ans++;
            x++;
            y++;
        }

        else if(app[x]<avail[y])
        {
            x++;
        }
        else
        {
            y++;
        }
        
    }
    
   cout<<ans<<endl;
}

int main()
{
    
        solve();


    return 0;
}