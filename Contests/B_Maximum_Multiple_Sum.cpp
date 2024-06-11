#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    int n;
    cin>>n;

    int ans;
    int maxi=INT_MIN;
    for (int i=2; i<=n; i++)
    {
        int x=i;
        int k=1;
        while (k*x<=n)
        {
            if ((((k)*(k+1))/2)*i>maxi)
            {
                maxi=(((k)*(k+1))*i)/2;
                // cout<<"maxi="<<maxi<<endl;
                ans=i;
                // cout<<"x="<<x<<endl;
            }
            k++;
        }
    }

    cout<<ans<<endl;

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