#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> p(n);
    vector<int> result(n);

    // Read input
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--; // Convert to 0-based indexing
    }

    // Calculate who gave a gift to each friend
    for (int i = 0; i < n; i++) {
        result[p[i]] = i;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        cout << result[i] + 1 << " "; // Convert back to 1-based indexing for output
    }
    return;
}

int main()
{
    solve();
    
    return 0;
}