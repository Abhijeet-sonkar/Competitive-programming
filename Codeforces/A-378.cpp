#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int a,b;
    cin>>a>>b;
    int playerOne=0;
    int playerTwo=0;
    for(int i=1;i<7;i++)
    {
        if(abs(i-a)<abs(i-b))
        playerOne++;
        else if(abs(i-a)>abs(i-b))
        playerTwo++;
    }
    cout<<playerOne<<" "<<6-(playerOne+playerTwo)<<" "<<playerTwo<<endl;
    
    return 0;
}