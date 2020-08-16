#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int color[4];
    int zero=0;
    for (int i = 0; i < 4; i++)
    {
        cin>>color[i];
        if(color[i]==0)
        zero++;
    }
    if(zero==0)
    {
        int even=0;
        for (int i = 0; i <4; i++)
        {
            if(color[i]%2==0)
            even++;
        }
        if(even!=2)
        cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
        

        
    }
    else
    {
        int odd=0;
        for (int i = 0; i <4; i++)
        {
            if(color[i]%2!=0)
            odd++;
        }
       if(color[3]==0)
       {
           if(odd==3||odd<=1)
           cout<<"Yes"<<endl;
           else
           {
               cout<<"NO"<<endl;
           }
           
       }
       else
       {
           if(odd>1)
           cout<<"No"<<endl;
           else
           {
               cout<<"Yes"<<endl;
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