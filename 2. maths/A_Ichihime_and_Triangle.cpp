#include <iostream>
using namespace std;

void inputAndOutput()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    cout<<b<<" "<<c<<" "<<c<<" "<<endl;
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