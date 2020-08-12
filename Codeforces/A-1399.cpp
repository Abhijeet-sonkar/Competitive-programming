#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


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
    bool ans =true;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]-arr[i-1]>1)
        {
            ans=false;
            break;
        }
    }
    if(ans)
    cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
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