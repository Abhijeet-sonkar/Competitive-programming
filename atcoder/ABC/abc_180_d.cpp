#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll mod = 1e9 + 7;

ll x,y,a,b;

ll evolve(ll str)
{
    if(str>=y) return -1ll;

    return max(1ll+evolve(str*a),1ll+evolve(str+b));
}


ll solve()
{
    cin>>x>>y>>a>>b;

    ll exp=0;
    while((double)a*x<=2e18&&a*x<=x+b&&a*x<y )
    {
        

       
        x*=a;
        exp++;
    }
    
     if(x<y)
     {
         exp+=(y-1-x)/b;
     }
    return exp;
}

int main()
{
 
    int t=1;
 
    while(t)
    {
        cout<< solve()<<endl;
        --t;
    }

    return 0;
}