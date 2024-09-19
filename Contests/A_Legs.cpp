#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int x= n/4;
    n=n%4;
    int y= n/2;

    cout<<x+y<<endl;

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