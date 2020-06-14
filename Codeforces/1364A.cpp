#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n;
    ll x;
    cin>>n>>x;
    int arr[n]={0};
   
      ll curSum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        curSum+=arr[i];
    }
   
    
    int end=n-1;
    int ans=-1;
    int answer=-1;
    if(curSum%x!=0)
    cout<<n<<endl;
    else
    {
        for (int start = 0; start < n;start++)
        {
            if(arr[start]%x!=0)
            {
                answer=n-start-1;
                
            }
            if(arr[end]%x!=0)
            {
                ans=end;
                
            }
            if(ans>0||answer>0)
            {
                ans=max(ans,answer);
                break;
            }
            end--;

        }

        if(ans==-1&&answer==-1)
        cout<<"-1"<<endl;
        else
        {
            cout<<ans<<endl;
        }
        
        
    }
    
   

    
}

int main()
{
   ;
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}