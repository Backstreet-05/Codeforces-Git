#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    int x1, x2, x3;
    cin>>x1>>x2>>x3;

    int m= min (x1, min(x2,x3));
    int n= max (x1, max(x2,x3));

    int minDist= INT_MAX;

    for (int i=m; i<=n; i++)
    {
        int k= abs(i-x1) + abs(i-x2) + abs(i-x3);
        minDist= min(k, minDist);
    }

    cout<<minDist<<endl;

    return;
}

int main()
{
    int t;
    cin>>t;

    for (int i=1; i<=t; i++)
    {
        inputAndOutput();
    }


    return 0;
}