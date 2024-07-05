#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin>>a>>b;

    if ((2*min(a,b))>=max(a,b))
    {
        int x= min (a,b);
        cout<<4*(x*x)<<endl;
    }

    else 
    {
        int y= max(a,b);
        cout<<y*y<<endl;
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