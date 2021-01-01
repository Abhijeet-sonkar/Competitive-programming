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
     
     int a;
     map<int,int> m;
    for (int i = 0; i <n; i++)
    {
        cin>>a;
        m[a]++;
    }
    vector<pair<int,int>> v;
    
    for(auto i:m)
    {
        v.push_back({i.first,i.second});
    }

    ll f[100010];
    for (int i = 0; i <v.size() ; i++)
    {
        int pr=i-1;
        while(pr>=0&&v[pr].first+1==v[i].first)pr--;

        if(pr==-1)f[i]=1ll*v[i].first*v[i].second;
        else f[i]=f[pr]+1ll*v[i].first*v[i].second;

        if(i>0)
        f[i]=max(f[i],f[i-1]);
    }
    
    cout<<f[v.size()-1]<<endl;

}

int main()
{
    init();
    int t=1;

    while(t)
    {
        solve();
        --t;
    }

    return 0;
}