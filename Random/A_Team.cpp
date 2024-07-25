#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int ans=0;

    for (int i=1; i<=t; i++)
    {
        vector <int> v(3);
        int sum=0;
        for (int i=0; i<3; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }        
        if (sum>=2) ans++;
    }

    cout<<ans<<endl;

    return 0;
}