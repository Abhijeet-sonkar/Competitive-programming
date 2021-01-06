#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
 
void init()
{
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    priority_queue<int, vector<int>, greater<int>> gift;
    sort(arr, arr + n);
   
 
 
    int cost[m];
    int a;
    for (int i = 0; i < m; i++)
    {
        cin >>cost[i];
        gift.push(cost[i]);
    }
 
    int out=0;
    ll ans=0;
    for (int i = n-1; i >=0; i--)
    {
    
        if(out<arr[i])
        {
           ans+= gift.top();
           gift.pop();
           out++;
        }
        else ans+=cost[arr[i]-1];
 
      
        
    }
 
    cout<<ans<<'\n';
 
    
}
 
int main()
{

    ios::sync_with_stdio(false);
cin.tie(nullptr);
    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }
 
    return 0;
}