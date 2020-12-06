#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int a,b;
    cin>>a>>b;
    int c=abs(a-b);
    if(a==b)
    cout<<"0"<<endl;
    else
    {
    

        int answer=c/10;
        if(c%10!=0)
        answer++;
        cout<<answer<<endl;
    }
    

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