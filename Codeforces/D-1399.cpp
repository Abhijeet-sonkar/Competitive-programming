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
    string s;
    cin>>s;
    deque<int> one;
    deque<int> zero;
    int answer[n]={ 0 };
    int grp=0;
    int index=0;
    for (auto i:s)
    {
        if (i=='0')
        {
            if (one.empty())
            {
                grp++;
                answer[index]=grp;
                zero.push_back(grp);

            }
            else
            {
                answer[index]=one.front();
                zero.push_back(one.front());
                one.pop_front();

            }

        }
        else
        {
            if (zero.empty())
            {
                grp++;
                answer[index]=grp;
                one.push_back(grp);

            }
            else
            {
                answer[index]=zero.front();
                one.push_back(zero.front());
                zero.pop_front();

            }

        }

        index++;
    }
    cout<<grp<<endl;
    for(auto i:answer)
    {
        cout<<i<<" ";
    }
    cout<<endl;




}

int main()
{
    init();
    int t;
    cin>>t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}