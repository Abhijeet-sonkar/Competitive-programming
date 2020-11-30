#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

bool check(pair<int,int> a,pair<int,int> b,pair<int,int> c){

       ll ar=-1*(a.first)*(b.second)+(a.first*c.second)+(b.first*a.second)
              +(-1*b.first*c.second)+c.first*b.second+(-1*c.first*a.second);


    return ar==0?true:false;
}

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> cord(n);
    for (int i = 0; i <n; i++)
    {
        cin>>cord[i].first>>cord[i].second;

    }
    bool valid=false;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
             for (int k = j+1; k < n; k++)
             {
                 
                 if(check(cord[i],cord[j],cord[k]))valid=true;
             }
             
        }
        
        
    }
    if(valid)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

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