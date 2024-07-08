#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector <long long int> vec(n);

    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());

    vector<long long int> vec1;

    for (int i=0; i<n; i++)
    {
        if (vec[i]%vec[0]!=0)
        {
            vec1.push_back(vec[i]);
        }
    }

    if (vec1.empty()) cout<<"Yes"<<endl; 
    else 
    {
        sort (vec1.begin(), vec1.end());
        int checker=0;
        for (int i=0; i<vec1.size(); i++)
        {
            if (vec1[i]%vec1[0]!=0)
            {
                checker=1;
            }
        }
        if (checker==1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
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