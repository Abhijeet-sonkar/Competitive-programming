#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n;
    cin>>n;
    string s;
    string t;
    cin>>s>>t;
    s+='0';
    t+='0';
    vector<int> ans;
    vector<int> ans2;
    for (int i = 1; i <=n; i++)
    {
        if(s[i]!=s[i-1])
        ans.push_back(i);
        if(t[i]!=t[i-1])
        ans2.push_back(i);
    }

    ans.insert(ans.end(),ans2.rbegin(),ans2.rend());
    cout<<ans.size()<<" ";
    for (auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    

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