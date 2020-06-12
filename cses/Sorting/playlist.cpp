#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    int arr[n+1];
    map<int,int> m;
    for (int i = 1; i <= n; i++)
    {
         cin>>arr[i];
    }
    int start=1;
    int ans=INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        
        if(m[arr[i]]>0&&start<=m[arr[i]])
        {
            start=m[arr[i]]+1;
        
        }
        m[arr[i]]=i;
        ans=max(ans,i+1-start);


    }
    cout<<ans<<endl;
    

}

int main()
{
   
        solve();
   

    return 0;
}