    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long int
    const ll mod = 1e9 + 7;

    void solve()
    {
        int x,n;
        cin>>x>>n;
        
    
        map<int,bool> vis;
        int a;
        for (int i = 0; i <n; i++)
        {
            cin>>a;
            vis[a]=true;
        }
        int b=x;

        for (int i = 0; i < 10000; i++)
        {
            if(!vis[b])
            break;

            --b;
        }
        int c=x+1;

        for (int i = 0; i < 10000; i++)
        {
            if(!vis[c])
            break;

            c++;
        }
        
    if(abs(x-b)<abs(x-c))
    cout<<b<<endl;
    else if(abs(x-b)==abs(x-c))
    {
        cout<<min(b,c)<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    
    }

    int main()
    {
        
        int t=1;
        //cin>>t;
        while(t)
        {
            solve();
            --t;
        }

        return 0;
    }