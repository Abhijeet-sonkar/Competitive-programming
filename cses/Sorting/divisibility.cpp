#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    ll arr[n];
    ll mod[n]={0};
    ll curSum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        curSum=curSum+arr[i];
        mod[(curSum%n+n)%n]++;
    }
    ll count=0;
    for (int i = 0; i < n; i++)
    {
        if(mod[i]>1)
        count=count+(mod[i]*(mod[i]-1ll))/2ll;
    }
    count=count+mod[0];
    cout<<count<<endl;

}

int main()
{

        solve();

    return 0;
}