#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector <int> v(3);

    for (int i=0; i<3; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int n=5;

    while(n>0)
    {
        if (v[0]<v[1])
        {
            v[0]++;
            n--;
            continue;
        }
        if (v[1]<v[2])
        {
            v[1]++;
            n--;
            continue;
        }
        if (v[1]==v[2] && v[0]==v[1])
        {
            v[2]++;
            n--;
            continue;
        }
    }

    cout<<(v[0]*v[1])*v[2]<<endl;

   
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