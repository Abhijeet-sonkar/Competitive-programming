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

    vector<pair<int,int>> task;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        task.push_back(make_pair(a,b));

    }
    sort(task.begin(),task.end());
    ll time=0;
    ll  reward=0;
    for (int i = 0; i < n; i++)
    {
        time+=task[i].first;
        reward+=task[i].second-time;
      

    }
   cout<<reward<<endl;
}

int main()
{
        solve();
  

    return 0;
}