#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r, x, y;
    cin>>l>>r;

    x=l;
    y=2*l;

    if (y<=r) cout<<x<<" "<<y<<endl;
    else cout<<-1<<" "<<-1<<endl;

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