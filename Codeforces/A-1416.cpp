#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
const int MAXN = (int)3e5 + 5;
int n;
int f[MAXN], last[MAXN], arr[MAXN], ans[MAXN];
void init()
{
}

void solve()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f[i] = last[i] = 0;
        ans[i] = -1;
    }
  
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }


    for (int i = 1; i <= n; i++)
    {

        int x = arr[i];
        f[x] = max(f[x], i - last[x]);
        last[x] = i;
    }
   
    for (int x = 1; x <= n; x++)
    {
        f[x]=max(f[x],n-last[x]+1);

        for (int i = f[x]; (i <=n)&&(ans[i]==-1); i++)
        {
            ans[i]=x;
        }
        
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<endl;
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