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
    string s;
    cin>>s;
    if( n%2==0)
    {
        bool flag=false;
        for (int  i = 1; i < n; i=i+2)
        {
            if((s[i]-48)%2==0)
            {
                     flag=true;
                     break;
            }
        }
        if(flag)
        cout<<"2"<<endl;
        else
        {
            cout<<"1"<<endl;

        }
        
        
    }
    else
    {
         bool flag=false;
        for (int  i = 0; i < n; i=i+2)
        {
            if((s[i]-48)%2!=0)
            {
                     flag=true;
                     break;
            }
        }
        if(flag)
        cout<<"1"<<endl;
        else
        {
            cout<<"2"<<endl;
            
        }
        
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