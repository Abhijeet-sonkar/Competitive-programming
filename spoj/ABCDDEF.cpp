#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    map<int,int> first;
    map<int,int> second;
    for (int i = 0; i <n ; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k<n; k++)
            {
                first[arr[i]*arr[j]+arr[k]]++;
                if(arr[k]!=0)
                second[(arr[i]+arr[j])*arr[k]]++;
                
            }
            
        }
        

    }
    int count=0;
    for (auto it=first.begin();it!=first.end();it++)
    {
        if(second[it->first]>0)
        count+=second[it->first]*(it->second);
    }
   
   cout<<count<<endl;
    

}

int main()
{
    
        solve();
  
    return 0;
}
