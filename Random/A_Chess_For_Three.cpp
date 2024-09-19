#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector <int> vec(3);
    for (int i=0; i<3; i++)
    {
        cin>>vec[i];
    }

    int sum=0;

    for (int i=0; i<3; i++)
    {
        sum+=vec[i];
    }

    if (sum%2!=0) 
    {
        cout<<-1<<endl;
        return;
    }

    cout<<(vec[0]+min(vec[1], (vec[1]+vec[2]-vec[0])/2))<<endl;

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