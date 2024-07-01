#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b, c, n;
    cin>>a>>b>>c>>n;

    long long int total= a+b+c+n;
    
    if (total % 3 != 0) 
    {
        cout << "NO" << endl;
        return;
    }
    
    if(a>total/3 || b>total/3 || c>total/3) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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