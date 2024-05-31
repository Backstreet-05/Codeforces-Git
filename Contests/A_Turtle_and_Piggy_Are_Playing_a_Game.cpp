#include <bits/stdc++.h>
using namespace std;
 
int maxLog (long long int n)
{
    int ans= static_cast<int>(floor(log (n)/log(2)));
    return ans;
}
 
void inputAndOutput()
{
    long long int x=-1;
    long long int y=-1;
    cin>>x;
    cin>>y;
    int ans= maxLog (y);
    cout<< ans <<endl;
}
 
 
int main()
{
    int n;
    cin>>n;
 
    for (int i=1; i<=n; i++)
    {
        inputAndOutput();
    }
 
    return 0;
}