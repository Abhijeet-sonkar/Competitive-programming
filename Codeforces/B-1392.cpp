#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll big=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        big=max(big,arr[i]);
    }
    ll big2=0;
    for (int i = 0; i <n; i++)
    {
        arr[i]=big-arr[i];
        big2=max(big2,arr[i]);
    }
    if(k%2==0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i]=big2-arr[i];
        
        }


    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
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