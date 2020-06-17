#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int evenCount=0;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        evenCount++;
    }

    int oddCount=n-evenCount;
    if(n%2==0)
    {
        if(oddCount==evenCount)
        {
            int answer=0;
            for (int i = 0; i < n; i=i+2)
            {
                if(arr[i]%2!=0)
                answer++;

            }
            cout<<answer<<endl;

        }
        else
        {
            cout<<"-1"<<endl;
        }
        
    }
    else
    {
        if((oddCount+1)==evenCount)
        {
            int answer=0;
            for (int i = 0; i < n; i+=2)
            {
                if(arr[i]%2!=0)
                answer++;
            }
            cout<<answer<<endl;
            
        }
        else
        {
            cout<<"-1"<<endl;
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