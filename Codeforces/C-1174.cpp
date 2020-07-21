
#include <bits/stdc++.h>
using namespace std;
bool prime[100001];
int ans[100001];
void primeCheck(int n)
{

    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {
           
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;

             
            }
            
        }
    }


        

    
    


 
}

int main()
{

    
    int n;
    cin>>n;
    primeCheck(100000);
    int count=1;
    for (int i = 2; i <=100000; i++)
    {   
        
        if(prime[i]==true)

        {
            
            for (int j = i; j<=100000; j+=i)
            {
               
                ans[j]=count;
            }
            count++;
        }
    }
    for (int i = 2; i <=n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}
