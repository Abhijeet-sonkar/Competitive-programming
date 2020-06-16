#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n,k;
    cin>>n>>k;

    if(n%2!=0)
    {
        if(k%2==0||k>n)
        cout<<"NO"<<endl;

        else
        {
            cout<<"YES"<<endl;
            for (int i = 1; i <= k-1; i++)
            {
                cout<<"1"<<" ";
            }
            cout<<n-k+1<<endl;
            
            
        }
        

    }
    else
    {
        if(k<=(n/2))
        {
            cout<<"YES"<<endl;
            for (int i = 1; i <= k-1; i++)
            {
                cout<<"2"<<" ";
            }
            
            cout<<n-(2*(k-1))<<endl;
        }
        else
        {
            if(k>n)
            {
                cout<<"NO"<<endl;
            }
            else  if((n-(k-1))%2!=0)
             {
                 cout<<"YES"<<endl;
                 for (int i = 1; i <=k-1; i++)
                 {
                     cout<<"1"<<" ";

                 }
                 cout<<n-(k-1)<<endl;
             }
             else 
             {
                 cout<<"NO"<<endl;
             }
             
        }
        
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