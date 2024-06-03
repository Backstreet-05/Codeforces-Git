#include<bits/stdc++.h>
using namespace std;

int cubeRemoval(vector<int>& cubes, int n, int f, int k)
{
    int value= cubes[f-1];
    int frequency=0;

    int low=-1;
    int high=-1;

    int z=0;

    sort(cubes.begin(), cubes.end());
    reverse(cubes.begin(), cubes.end());

    for (int i=0; i<n; i++)
    {
        if (cubes[i]==value)
        {
            frequency++;
        }
    }

    if (frequency>1)
    {
        for (int i=0; i<n; i++)
        {
            if (cubes[i]==value)
            {
                low=i;
                // cout<<"low="<<low<<endl;
                break;
            }
        }

        for (int i=n-1; i>-1; i--)
        {
            if (cubes[i]==value)
            {
                high=i;
                // cout<<"high="<<high<<endl;
                break;
            }
        }
    }

    // cout<<"k-1="<<k-1<<endl;

    if (cubes[k-1]<value)
    {
    return 1;
    }

    else if (cubes[k-1]>value)
    {
    return 3;
    }

    else if ((cubes[k-1]==value)&&low!=-1&&high!=-1)
    {
        if ((low<=k-1 && high>k-1))
        {
        return 2;
        }
        else return 1;
    } 
    return -1;
}

void inputAndOutput()
{
    int n, f, k;
    cin>>n>>f>>k;

    vector<int> cubes(n);
    for (int i= 0; i<n; i++)
    {
        cin>>cubes[i];
    }

    string result;

    int ans;

    if (n==f&&f==k)
    {
        ans = 1;
    }

    else
    ans= cubeRemoval(cubes, n, f, k);

    if (ans == 1 || ans==-1) 
        result = "YES";
    else if (ans == 2) 
        result = "MAYBE";
    else if (ans == 3) 
        result = "NO";

    cout<<result<<endl;

    n = f = k = 0;
    cubes.clear();

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