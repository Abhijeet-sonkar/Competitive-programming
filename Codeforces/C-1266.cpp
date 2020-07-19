#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
        cout << '0' << endl;
    else if(m==1)
    {
        int a=n+m;
        for (int i = 0; i < n; i++)
        {
             cout<<a<<endl;
             a--;
        }
        
    }
    
    else
    {
        int arr[n][m];
        int a = n + m;
        for (int i = 0; i < m; i++)
        {
            arr[0][i] = a;
            a--;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j]=arr[0][j]*(i+1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
    }
}

int main()
{

    solve();

    return 0;
}