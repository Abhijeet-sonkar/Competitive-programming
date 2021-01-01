#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}
ll cnt[500005];
void solve()
{
    int n;
    cin >> n;

    int arr[n];
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%3!=0)
    {
        cout<<"0"<<endl;
        return;
    }
    
    ll answer=0;
    ll target=sum/3;
 
    ll s=0;
    for (int i = n-1; i >= 0; i--)
    {
        s+=arr[i];
        if(s==target)cnt[i]=1;
    }
    
    for (int i = n-2; i >=0; i--)
    {
         cnt[i]+=cnt[i+1];
    }
    s=0;
    for (int i = 0; i <=n-3; i++)
    {
        s+=arr[i];
        if(s==target)
        answer+=cnt[i+2];
    }
    cout<<answer<<endl;
    
    
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