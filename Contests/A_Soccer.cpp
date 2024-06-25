#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    long long int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    if ((x1>y1 && y2>x2) || (y1>x1 && x2>y2))
    {
        cout<<"NO"<<endl;
    }

    else cout <<"YES"<<endl;

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