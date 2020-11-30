#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

int city[10][10];
int dp[10][1<<10];
int n;
int k;


void solve()
{
    int k;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>city[i][j];
        }
        
    }
    vector<int> per;
    for (int i = 1; i <n; i++)
    {
        per.push_back(i);
    }
    
    ll sum=0;

    int count=0;
    do{

     sum=0;
     sum+=city[0][per[0]];
     for (int i = 0; i <n-2; i++)
     {
         sum+=city[per[i]][per[i+1]];
     }
     sum+=city[0][per[n-2]];
     
  //   cout<<sum<<endl;
     if(sum==k)count++;

    }while (next_permutation(per.begin(),per.end()));
    
    
    cout<<count<<endl;

}

int main()
{
   
    int t=1;
   
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}