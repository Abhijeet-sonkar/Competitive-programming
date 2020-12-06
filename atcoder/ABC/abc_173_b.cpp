#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n;
    cin>>n;
    map<string,int> cases;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        cases[a]++;
    }
    cout<<"AC"<<" x "<<cases["AC"]<<endl;
    cout<<"WA"<<" x "<<cases["WA"]<<endl;
    cout<<"TLE"<<" x "<<cases["TLE"]<<endl;
    cout<<"RE"<<" x "<<cases["RE"]<<endl;

}

int main()
{
    init();
    int t=1;

    while(t)
    {
        solve();
        --t;
    }

    return 0;
}