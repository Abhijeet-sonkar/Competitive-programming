#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int m=1e9;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    sort(arr,arr+n);
    ll answer=0;
    for (int i = 1; i <n; i++)
    {
        if(arr[i]<k)
        {
         int temp= k-arr[i];
         answer+=(temp)/arr[0];
        }
    }
    
    cout<<answer<<endl;

    

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