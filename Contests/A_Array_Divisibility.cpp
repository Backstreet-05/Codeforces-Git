#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector <int> vec(n);
    for (int i=0; i<n; i++)
    {
        vec[i]=i+1;
    }

    vector <int> vecsum(n);

    for (int i=0; i<n; i++)
    {
        int sum=0;
        for (int j=0; j<n; j++)
        {
            if ((j+1)%(i+1)==0)
            {
                sum+=vec[j];
            }
            vecsum[i]=sum;
        }
    }

    for (int i=0; i<n; i++)
    {
        cout<<vecsum[i]<<" ";
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