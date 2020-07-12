#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    cout<<n/2<<" "<<n/2<<endl;
    else
    {
        int maxDiv=1;
        for (int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                maxDiv=max({maxDiv,i,n/i});
              
            }
        }
        cout<<maxDiv<<" "<<n-maxDiv<<endl;
    }
    

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