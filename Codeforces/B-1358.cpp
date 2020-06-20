#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    int a;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        num.push_back(a);
    }
    sort(num.begin(),num.end());
    int granny=1;
    int index=-1;
  for (int i = 0; i < n; i++)
  {
      if(num[i]<=granny)
      {
          num[i]=1;
          index=i;
        
      }
      else
      {
          num[i]=-1;
      }
      granny++;
  }
  if(index==-1)
  cout<<"1"<<endl;
  else
  {
      cout<<index+2<<endl;
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