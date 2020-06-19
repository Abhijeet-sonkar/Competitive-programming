#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    int sum=0;
    int first=min(a,b);
    int second=max(a,b);
    int answer=0;
    while(sum<=n)
    {
        sum=first+second;
        
        first=second;
        second=sum;
        answer++;
        
    }
   cout<<answer<<endl;

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