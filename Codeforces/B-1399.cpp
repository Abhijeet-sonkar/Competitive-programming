#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    int minA=1e9;
    int minB=1e9;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]<minA)
        minA=arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        if(arr1[i]<minB)
        minB=arr1[i];
    }
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i]-minA;
        arr1[i]-=(arr[i]-minA);
        if(arr1[i]-minB>0)
        ans+=arr1[i]-minB;
    }

    cout<<ans<<endl;
    

}

int main()
{
    
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}