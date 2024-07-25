#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    if (k==n*n) cout<<(2*n)-1<<endl;
    else if (k==0) cout<<0<<endl;
    else 
    {
        int count=1;
        k-=n;
        int checker=1;
        while (k>0 && n>0)
        {
            // cout<<"Before operations Count="<<count<<" k="<<k<<" n="<<n<<endl;
            if (checker==1)
            {
                n--;
                checker=0;
            }
            else 
            {
                checker=1;
            }
            k-=n;
            
            // cout<<"After operations k="<<k<<" n="<<n<<endl;
            count++;
        }
        cout<<count<<endl;
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