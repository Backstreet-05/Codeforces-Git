#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int checker=0;

    vector <int> vec(n);

    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    for (int i=0; i<n; i++)
    {
        if (vec[i]==1) 
        {
            checker=1;
            break;
        }
    }

    if (checker) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

    return;
}

int main()
{
     solve();
    
    return 0;
}