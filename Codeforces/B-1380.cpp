#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
   
   string s;
   cin>>s;
   int rock=0;
   int scissor=0;
   int paper=0;
   for (int i = 0; i < s.size(); i++)
   {
       if(s[i]=='P')
       paper++;
       else if(s[i]=='R')
       {
         rock++;
       }
       else
       {
           scissor++;
       }
       
       
   }
   int num=max({scissor,paper,rock});
   if(num==scissor)
   {
       for (int i = 0; i < s.size(); i++)
       {
           cout<<"R";
       }
       cout<<endl;
   }
  else if(num==paper)
   {
       for (int i = 0; i < s.size(); i++)
       {
           cout<<"S";
       }
       cout<<endl;
   }
   else
   {  for (int i = 0; i < s.size(); i++)
       {
           cout<<"P";
       }
       cout<<endl;
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