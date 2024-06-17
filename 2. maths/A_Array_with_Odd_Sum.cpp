#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    int n;
    cin>>n;

    vector<int> vec (n);

    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    int oddCtr=0;
    int evenCtr=0;

    for (int i=0; i<n; i++)
    {
        if (vec[i]%2==0) evenCtr++;
        else oddCtr++;
    }

    if (evenCtr==0 && oddCtr%2!=0)
    cout<<"YES"<<endl;

    else if (evenCtr==0 && oddCtr%2==0)
    cout<<"NO"<<endl;

    else if (evenCtr>0 && oddCtr==0)
    cout<<"NO"<<endl;

    else if (evenCtr>0 && oddCtr>0)
    cout<<"YES"<<endl;

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