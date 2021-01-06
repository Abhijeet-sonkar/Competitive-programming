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
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
      
    }
    int mul[n]={0};
    memset(mul,0,sizeof(mul));

    for (int i = 0; i <n; i++)
    {
        mul[i]++;
        if(arr[i]%k!=0)continue;
        int temp= arr[i];
        while(temp%k==0)
        {
                  mul[i]++;
            temp/=k;
     
        }
    }

    
  
    int mn=1e9;
    int pnt=0;
    for (int i = 0; i < n; i++)
    {
        if(mul[i]<mn)
        {
            mn=mul[i];
            pnt=i;
        }
    }
    for (int i = 0; i <= pnt-1; i++)
    {
        mul[i]=mn+1;
    }
    for (int i = pnt+1; i < n; i++)
    {
         mul[i]=mn;
    }

    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        ans+=mul[i]*1ll*arr[i];
    }
    cout<<ans<<endl;
    
    
    
    
    

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
