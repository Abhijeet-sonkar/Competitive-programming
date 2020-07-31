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
    int a=0;
    if(n%4==0)
    a=n/4;
    else
    {
        a=n/4+1;
    }
    
    int nine=n-a;
    for (int i = 0; i <nine; i++)
    {
        cout<<"9";
    }
    for (int i = 0; i <a; i++)
    {
        cout<<"8";
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