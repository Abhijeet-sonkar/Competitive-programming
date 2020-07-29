#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n,m;
    cin>>n>>m;
    int a,b;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
    }
    for (int i = 0; i <n; i++)
    {
        if(i%2==0)
        cout<<"0";
        else
        {
            cout<<"1";
        }
        
    }
    cout<<endl;
    

}

int main()
{
    
    int t=1;
    
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}