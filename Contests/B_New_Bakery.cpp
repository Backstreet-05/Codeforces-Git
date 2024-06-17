#include <bits/stdc++.h>
using namespace std;

void inputAndOuptut()
{
    long long n, a, b;
    cin >> n >> a >> b;

    if (b <= a) {
        cout << n * a <<endl;
    } else {
        long long int k = min(n, b - a + 1);
        long long int promotionalProfit = k * (2 * b - k + 1) / 2; 
        long long int regularProfit = (n - k) * a;
        cout << promotionalProfit + regularProfit <<endl;
    }
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