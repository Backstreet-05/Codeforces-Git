#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    int n;
    cin>>n;
    vector<long long int> vec(n);
    for (int i = 0; i < n; i++) 
    {
            cin >> vec[i];
    }

    int number=0;

    if (n==1 && vec[0]==0)
    {
        number=1;
    }
    else
    {
        for (int i=0; i<n; i++)
        {
            int checker=0;
            long long int sum=0;
            // cout<<"subarray in question-"<<endl;
            for (int j=0; j<=i; j++)
            {
                // cout<<vec[j]<<"lol"<<" ";
                sum+=vec[j];
            }
            // cout<<endl;
            // cout<<"sub array sum="<<sum<<endl;
            for (int k=0; k<=i; k++)
            {
                if (vec[k]==sum-vec[k])
                {
                    checker++;
                    // cout<<"good sub-array as sum="<<sum<<" and vec[i]="<<vec[k]<<" (k="<<k<<""<<" and number="<<number<<endl;
                }
            }

            if (checker>0)
            number++;
        }
    }

    cout<<number<<endl;
    

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