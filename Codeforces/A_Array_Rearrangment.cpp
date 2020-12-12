#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    int arr2[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }

    bool valid = true;
    for (int i = 0; i <n; i++)
    {
       if(arr[i]+arr2[i]>x)valid=false;
    }

    if(valid)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

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