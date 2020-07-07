#include <iostream>
using namespace std;
int dp[1000001];


void init()
{
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for (int i =4;i<=1000000;i++) {
        
        dp[i]=((dp[i-1]+dp[i-2])% 1000000007+dp[i-3])%1000000007;

    }
}
int main() {
    init();
	int t;
    cin>>t;
	int n;
	while(t)
	{
	    cin>>n;
	    cout<<dp[n]<<endl;
	    --t;
	}
	return 0;
}
