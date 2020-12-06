#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int y, x, n;
bool isPossible(int i)
{

    if ((y - x) % i != 0)
        return false;

    int totalTerms = (y - x) / i + 1;
    if (totalTerms > n)
        return false;

    return true;
}

void solve()
{

    cin >> n >> x >> y;
    set<int> answer;
    int b = 0;
    answer.insert(x);
    answer.insert(y);
    int maxDiff = y - x;
    int diff = 0;
    for (int i = 1; i <= maxDiff; i++)
    {
        if (isPossible(i))
        {
            diff = i;
            break;
        }
    }

    if (n > 2)
    {
        for (int i = x; i <= y; i += diff)
        {
            answer.insert(i);
        }
        int rem = n - answer.size();
     
        if (rem > 0)
        {
            while (x-diff > 0)
            {
                x -= diff;
                if (rem == 0)
                {
                    break;
                }
                answer.insert(x);
                rem--;
            }
       
            if(rem>0)
            {
                while(rem!=0)
                {
                    y+=diff;
                    answer.insert(y);
                    rem--;

                }
            }
        }
    }

   

    for (auto i : answer)
    {
         cout<<i<<" ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}