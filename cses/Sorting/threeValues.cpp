#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


struct secure_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15; x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9; x = (x ^ (x >> 27)) * 0x94d049bb133111eb; 
        return x ^ (x >> 31); 
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count(); 
        return splitmix64(x + FIXED_RANDOM); 
    } 
};
template<typename T, typename U> using umap = unordered_map<T,U,secure_hash>; 


int main()
{
       ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;

    cin>>n>>x;

    vector<int> num(n,0);
    umap<int,int> index;
    for (int i = 0; i <n; i++)
    {
        cin>>num[i];
    }

     for (int i = 0; i < n; i++)
     {
         index[num[i]]=i;
     }
    
     for (int i = 0; i < n-2; i++)
     {
         for (int j = i+1; j < n-1; j++)
         {
           
             if(index[x-(num[i]+num[j])]>j)
             {
                 cout<<i+1<<" "<<j+1<<" "<<index[x-(num[i]+num[j])]+1<<"\n";
                
                 return 0;
             }
         }
         
     }
     
    cout<<"IMPOSSIBLE\n";
    
    return 0;
}