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
    ll  m;

    cin >> n >> m;
    int a[n];


    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
   
    int last = 0;
    int j = 0;
    int ans = INT_MAX;
    ll curSum=0;
    for (int i = 0; i < n; i++)
    {

        curSum+=a[i];
        while (j < n &&curSum-a[j]>=m)
        {
            curSum-=a[j];
            j++;
        }
        if(curSum>=m)
        ans =min(ans,i-j+1);

        /* code */
    }
    if(ans==INT_MAX)cout<<"-1"<<endl;
    else 
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