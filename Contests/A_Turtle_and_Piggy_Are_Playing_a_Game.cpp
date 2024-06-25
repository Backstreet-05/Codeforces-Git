#include <bits/stdc++.h>
using namespace std;
 
int maxLog(long long int n)
{
    // This function calculates the largest integer 'k' such that 2^k is less than or equal to 'n'.
    // It uses logarithm base 2 to find 'k'.
    int ans = static_cast<int>(log2(n));
    return ans;
}
 
void inputAndOutput()
{
    long long int x, y;
    cin >> x >> y;  // Read two long long integers from input
    int ans = maxLog(y);  // Compute the maximum power of 2 that is less than or equal to y
    cout << ans << endl;  // Output the result
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