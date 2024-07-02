#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <string> vec(n);
    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (vec[i]=="Tetrahedron") sum+=4;
        else if (vec[i]=="Cube") sum+=6;
        else if (vec[i]=="Octahedron") sum+=8;
        else if (vec[i]=="Dodecahedron") sum+=12;
        else if (vec[i]=="Icosahedron") sum+=20;
    }

    cout<<sum;

    return;
}

int main()
{
    solve();

    return 0;
}