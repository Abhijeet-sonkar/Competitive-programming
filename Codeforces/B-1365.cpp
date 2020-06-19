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
    vector<int> num;
    int countOne=0;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        num.push_back(a);
    }
      for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a==1)
        countOne++;
    }
   if( is_sorted(num.begin(),num.end()))
   {
       cout<<"Yes"<<endl;
   }
    
   else
   {
       if(countOne==n||countOne==0)
       cout<<"No"<<endl;
       else
       {
           cout<<"Yes"<<endl;
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