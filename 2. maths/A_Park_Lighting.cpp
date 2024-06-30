#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;

    if (n%2==0 || m%2==0)
    {
        cout<<(m*n)/2<<endl;
    }

    else
    {
        cout<<((m*n)+1)/2<<endl;
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