#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n;
    cin>>n;
    int sum=0;
    int zeroCount=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

        if(arr[i]==0)
        zeroCount++;

        sum=sum+arr[i];
    }
    if(sum==0)
    {
        if(zeroCount==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int startIndex=0;
            sum=0;
            while (1)
            {
                sum=sum+arr[startIndex];
                if(sum!=0)
                break;

                startIndex++;
            }
            cout<<"YES"<<endl;
            cout<<"2"<<endl;
            cout<<"1 "<<startIndex+1<<endl;
            cout<<startIndex+2<<" "<<n<<endl;
            
        }
        


    }
    else
    {
        cout<<"YES"<<endl;
        cout<<"1"<<endl;
        cout<<"1 "<<n<<endl;
    }
    
    

}

int main()
{
  
        solve();
   

    return 0;
}