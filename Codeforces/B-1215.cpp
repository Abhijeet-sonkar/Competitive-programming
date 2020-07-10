#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n;
    cin>>n;
    int arr[n];
    ll positive=1;
    ll negative=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        arr[i]=-1;
        else
        {
            arr[i]=1;
        }
        if(i>0)
        {
            arr[i]*=arr[i-1];
        }

        if(arr[i]==1)
        positive++;
        else
        {
            negative++;
        }
        
        
    }

    ll totalneg=positive*negative;
    cout<<totalneg<<" "<<n*1ll*(n+1)/2-totalneg<<endl;
    

}

int main()
{
    
        solve();
     

    return 0;
}