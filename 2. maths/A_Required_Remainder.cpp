#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, n;
    cin>>x>>y>>n;
    if (((n/x)*x)+y>n)
    {
        cout<<((n/x)*x)+y-x<<endl;
    }
    else cout<<((n/x)*x)+y<<endl;
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