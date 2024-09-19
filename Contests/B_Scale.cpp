#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    char matrix[n][n];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for (int i=0; i<n; i=i+k)
    {
        for (int j=0; j<n; j=j+k)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }


    return;
}

int main()
{
    int t;
    cin>>t;

    for (int i=1; i<=t; i++)
    {
        solve();
    }

    return 0;
}