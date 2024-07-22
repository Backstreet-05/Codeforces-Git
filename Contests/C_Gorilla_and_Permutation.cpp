#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector <int> ans(n);

    int z=1;

    for (int i=0; i<n; i++)
    {
        if((n-i)>m)
        {
            ans[i]=n-i;
        }
        else
        {
            ans[i]=z;
            z++;
        }
    }

    for (int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

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