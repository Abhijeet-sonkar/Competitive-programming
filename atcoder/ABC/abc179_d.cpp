#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;
    
#define ll long long int
#define pb push_back
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define pre(i , j , n) for(ll i = j ; i >= n ; i--)
#define all(x) x.begin(), x.end()
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vll;
typedef vector<char>	vc;
typedef vector<bool>	vb;
typedef pair<ll,ll> 	pll;
#define br "\n"
#define ff first
#define ss second
#define MAX 1000003

ll mod = (ll)998244353;

void solve(){ 
    ll n,k;
    cin >> n >> k;
    vll dp(n + 2,0);
    vector<pll> p;
    rep(i,0,k){
        ll a,b;
        cin >> a >> b;
        p.pb({a,b});
    }
    dp[1] = 1;
    dp[2] = (-1 + mod) % mod;
    //cout<<dp[2]<<endl;
    rep(i,1,n + 2){
        dp[i] = (dp[i - 1] + dp[i] + mod) % mod;
        cout<<dp[i]<<" ";
        rep(j,0,k){
            ll a = p[j].ff;
            ll b = p[j].ss;
            // cout << min(i + a,n + 1) << " " << min(i + b + 1,n + 1) << br;
            if(i + a <= n) dp[i + a] = (dp[i] + dp[i + a] + mod) % mod;
            if(i + b + 1 <= n) dp[i + b + 1] = (dp[i + b + 1] - dp[i] + mod) % mod;   
            
        }
    }
    cout<<endl;
    // for(auto x:dp) cout << x << " ";
    cout << dp[n] << br;
}
	

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t = 1;
	// cin >> t;
	rep(i,0,t){
		solve();
	}
 
}	