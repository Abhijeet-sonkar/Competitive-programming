
//Author - Abhijeet Sonkar

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            cout << sum + arr[i] << " ";
        else
        {
            sum = sum + arr[i];
            cout << sum << " ";
        }
    }

    return 0;
}