#include <bits/stdc++.h>
using namespace std;

void inputAndOuptut()
{
    int n;
    cin>>n;
    int ans;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> vec[i];
    }

    int max1= INT_MIN;
    int idx1=-1;

    for (int i=0; i<n; i++)
    {
        if (vec[i]>max1)
        {
            max1=vec[i];
            idx1=i;
        }
    }

    if (idx1==n-1)
    {
        int max3=INT_MIN;
        for (int i=0; i<n-1; i++)
        {
            if (vec[i]>max3)
            {
                max3=vec[i];
            }
        }
        ans=max1+max3;
    }

    else
    {
        // int max2= INT_MIN;
        // for (int j=idx1+1; j<n; j++)
        // {
        //     if (vec[j]>max2)
        //     {
        //         max2=vec[j];
        //     }
        // }
        ans= max1+vec[n-1];
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
        inputAndOuptut();
    }

    return 0;
}