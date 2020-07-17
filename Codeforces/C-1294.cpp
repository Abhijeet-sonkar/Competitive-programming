#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

map<int, int> factors;
void primeFactors(int n)
{

    while (n % 2 == 0)
    {
        factors[2]++;
        n = n / 2;
    }

    int a = n;
    for (int i = 3; i <= sqrt(a); i = i + 2)
    {

        while (n % i == 0)
        {

            factors[i]++;
            n = n / i;
        }
    }
    if(n>2)
    factors[n]++;
}

void solve()
{
    int n;
    cin >> n;
    factors.clear();
    primeFactors(n);
   
    if (factors.size() == 0)
        cout << "NO" << endl;
    else if (factors.size() == 1)
    {
        auto it = factors.begin();
        if (it->second < 6)
            cout << "NO" << endl;
        else
        {
            int a = it->first;
              cout<<"YES"<<endl;
            cout << a << " " << a * a <<" "<< n / (a * a * a) << endl;
        }
    }
    else if (factors.size() == 2)
    {
        auto it = factors.begin();
        int a = it->second;
        it++;
        int b = it->second;
        if (a + b < 4)
            cout << "NO" << endl;
        else
        {
            it = factors.begin();
            a = it->first;
            it++;
            b = it->first;
            cout<<"YES"<<endl;
            cout << a << " " << b << " " << n / (a * b) << endl;
        }
    }
    else
    {
        auto it = factors.begin();
        int a = it->first;
        it++;
        int b = it->first;
          cout<<"YES"<<endl;
        cout << a << " " << b << " " << n / (a * b) << endl;
    }
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