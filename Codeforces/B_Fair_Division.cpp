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
    cin>>n;
    int arr[n];
    ll sum=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)cnt++;
        sum+=arr[i];
    }
    
    if(sum%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }

    if(n%2==1&&cnt==0)
    {
        cout<<"NO"<<endl;
        return;

    }
    cout<<"YES"<<endl;

}

int main()
{
    init();
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}