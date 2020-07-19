#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n;
    cin>>n;
    set<int> ans;
    ans.insert(0);
    ans.insert(1);
    ans.insert(n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        ans.insert(n/i);
        ans.insert(n/(n/i));
        
    }
    cout<<ans.size()<<endl;
    for (auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    

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