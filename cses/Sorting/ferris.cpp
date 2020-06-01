#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> kid(n);
    for (int i = 0; i < n; i++)
    {
        cin>>kid[i];
    }
    sort(kid.begin(),kid.end());
    int start=0;
    int end=n-1;
    int count=0;
    while(start<=end)
    {
        if(kid[start]+kid[end]<=k)
        {
            count++;
            start++;
            end--;
        }
        else 
        {
           end--;
           count++;

        }
    }

    cout<<count<<endl;
    

}

int main()
{
    
        solve();

    

    return 0;
}