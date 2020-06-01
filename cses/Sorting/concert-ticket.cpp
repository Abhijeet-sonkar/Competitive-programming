#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n,m;
    cin>>n>>m;
    multiset<int,greater<int>> a;
    int x;
    while(n--)
    {
        cin>>x;
        a.insert(x);
    }

    while (m--)
    {
        cin>>x;
        auto p=a.lower_bound(x);
        if(p==a.end())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<*p<<endl;
            a.erase(p);
        }
        
    }
    

}

int main()
{
    
      //  solve();
     multiset<int,greater<int>> a;
      multiset<int> b;
    int n;
    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        a.insert(n);
        b.insert(n);
    }
    cin>>n;
    cout<<*(a.upper_bound(n))<<endl;
    cout<<*(b.upper_bound(n))<<endl;

    

    return 0;
}