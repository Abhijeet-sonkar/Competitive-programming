#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    int arr[n+1];
    int flag=-1;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 2; i <= n-1; i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        flag=i;
    }
    if(flag==-1)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<flag-1<<" "<<flag<<" "<<flag+1<<endl;
    }
    
    

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