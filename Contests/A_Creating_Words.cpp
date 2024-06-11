#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    string a;
    string b;
    cin>>a;
    cin>>b;

    char temp= a[0];
    a[0]=b[0];
    b[0]=temp;

    cout<<a<<" "<<b<<endl;
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