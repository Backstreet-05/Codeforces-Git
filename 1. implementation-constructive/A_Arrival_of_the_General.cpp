#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    vector<int> sorted(n);
    for (int i=0; i<n; i++)
    {
        sorted[i]=vec[i];
    } 

    sort(sorted.begin(), sorted.end());

    int l=0, u=0; 

    for (int i=0; i<n; i++)
    {
        if (vec[i]==sorted[0]) l=i;
    }  

    for (int i=0; i<n; i++)
    {
        if (vec[i]==sorted[n-1]) 
        {
            u=i;
            break;
        }
    }  

    if (u<l)
    cout<<(u+(n-1-l));
    else
    cout<<(u+(n-1-l)-1);

    return;
}

int main()
{
    solve();    
    return 0;
}