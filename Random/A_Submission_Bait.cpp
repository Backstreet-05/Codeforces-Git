#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector <int> vec(n);

    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    map<int, int> hash;

    for (int i=0; i<n; i++)
    {
        hash[vec[i]]++;
    }

    int checker=0;

    for (const auto& i : hash) 
    {
        int freq= i.second;

        if (freq%2!=0)
        {
            checker=1;
            break;
        }
    }

    if (checker==1) cout<<"YES"<<endl;
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