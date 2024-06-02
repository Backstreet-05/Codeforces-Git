#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin>>x1>>x2>>x3;

    int dist=INT_MAX;

    for (int i=0; i<= max(x1, max(x2,x3)); i++)
    {
        if (dist>(abs(i-x1)+abs(i-x2)+abs(i-x3)))
        {
            dist= (abs(i-x1)+abs(i-x2)+abs(i-x3));
        }
        else continue;
    }
    cout<<dist;

    return 0;
}