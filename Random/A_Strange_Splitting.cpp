#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> vec(n);

    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

   bool allSame = true;

    for (int i=0; i<n-1; i++)
    {
        if (vec[i]!=vec[i+1])
        {
            allSame = false;
            break;
        }
    }

    if (allSame) 
    {
        cout<<"NO"<<endl;
        return;
    }

    else 
    {
        cout<<"YES"<<endl;
        string s(n, 'R');  
        s[1] = 'B';  
        cout << s << endl;        
    }
    return;
}

int main()
{
    int t;
    cin>>t;

    for (int i=1; i<=t; i++)
    {
        solve();
    }

    return 0;
}