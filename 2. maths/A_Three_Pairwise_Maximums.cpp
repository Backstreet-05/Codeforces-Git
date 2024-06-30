#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z;
    cin>>x>>y>>z;

    if (x==y && y==z)
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<x<<" "<<x<<endl;
    }

    else if (y==z && x!=y && y>x)
    {
        cout<<"YES"<<endl;
        if (x-1!=0)
        cout<<x-1<<" "<<x<<" "<<y<<endl;
        else cout<<x<<" "<<x<<" "<<y<<endl;
    }

    else if (x==z && x!=y && x>y)
    {
        cout<<"YES"<<endl;
        if (y-1!=0)
        cout<<y-1<<" "<<y<<" "<<x<<endl;
        else cout<<y<<" "<<y<<" "<<x<<endl;
    }

    else if (x==y && x!=z && y>z)
    {
        cout<<"YES"<<endl;
        if (z-1!=0)
        cout<<z-1<<" "<<z<<" "<<x<<endl;
        else cout<<z<<" "<<z<<" "<<x<<endl;
    }

    else if (z==y && x!=z && z>x)
    {
        cout<<"YES"<<endl;
        if (x-1!=0)
        cout<<x-1<<" "<<x<<" "<<y<<endl;
        else cout<<x<<" "<<x<<" "<<y<<endl;
    }

    else if (z==x && y!=z && z>y)
    {
        cout<<"YES"<<endl;
        if (y-1!=0)
        cout<<y-1<<" "<<y<<" "<<x<<endl;
        else cout<<y<<" "<<y<<" "<<x<<endl;
    }

    else if (y==x && y!=z && y>z)
    {
        cout<<"YES"<<endl;
        if (z-1!=0)
        cout<<z-1<<" "<<z<<" "<<x<<endl;
        else cout<<z<<" "<<z<<" "<<x<<endl;
    }

    else cout<<"NO"<<endl;


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