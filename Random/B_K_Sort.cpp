#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector <long long int> a(n);

    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    vector <long long int> b(n);
    long long int maximum= a[0];

    for (int i=0; i<n; i++)
    {
        maximum= max(a[i], maximum);
        b[i]=maximum;
    }

    long long int c=0;
    long long int sumOfDifference=0;

    for (int i=0; i<n; i++)
    {
        sumOfDifference+= b[i]-a[i];
        c=max(c,b[i]-a[i]);        
    }

    cout<<sumOfDifference+c<<endl;

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