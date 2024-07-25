#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    if (s.size()>10)
    {
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
    else cout<<s<<endl;

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