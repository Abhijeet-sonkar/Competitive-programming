#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
  string s;
  cin>>s;
  vector<char> answer;
  for (int i = 0; i <s.size()-1; i+=2)
  {
      answer.push_back(s[i]);
      
  }
  answer.push_back(s[s.size()-1]);
  for (auto i = answer.begin(); i !=answer.end(); i++)
  {
      cout<<*i;
  }
  cout<<endl;
  


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