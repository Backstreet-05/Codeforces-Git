#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin>>n>>x;

    int k=0;

    while (k*x<n-2)
    {
        k++;
    }

    cout<<k+1<<endl;
    
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