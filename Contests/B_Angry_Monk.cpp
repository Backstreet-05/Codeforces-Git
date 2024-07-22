#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(k);
    int sum = 0;
    for (int i = 0; i < k; i++) 
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < k-1; i++) 
    {
        sum+=a[i];
    }

    int ans= 2*sum -(k-1);

    cout<<ans<<endl;

    return;   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}