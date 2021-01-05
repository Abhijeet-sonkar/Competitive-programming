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
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll alice=0;
    for (int i = n-1; i >=0; i-=2)
    {
        if(arr[i]%2==0)alice+=arr[i];
    }
    ll bob=0;

    for (int i = n-2; i >=0; i-=2)
    {
        if(arr[i]%2==1)bob+=arr[i];
    }
    if(bob==alice)cout<<"Tie"<<endl;
    else 
    {
        if(bob>alice)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }

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