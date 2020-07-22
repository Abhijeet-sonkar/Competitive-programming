#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr2[m];
    int isPresent[1001]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        isPresent[arr[i]]=1;
     
    }
    
    bool flag=false;
    int ans;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
        if(isPresent[arr2[i]]==1)
        {
            flag=true;
            ans=arr2[i];
        }

    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
        cout<<"1"<<" "<<ans<<endl;
    }
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