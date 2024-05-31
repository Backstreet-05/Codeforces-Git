#include <bits/stdc++.h>
using namespace std;

void inputAndOutput() 
{
    int size;
    cin >> size;
    vector<int> a(size);
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    vector<int> b(size + 1);
    for (int i = 0; i < size + 1; i++) {
        cin >> b[i];
    }

    int operations = 0;
    int checker=0;
    for (int i=0; i< size; i++)
    {
        operations+= abs(a[i]-b[i]);

        if ((a[i]<=b[size])&&(b[size]<=b[i])||(a[i]>=b[size])&&(b[size]<=b[i]))
        {
            checker=1;
        }
    }

    if (checker==1) a.push_back(b[size]);
   else {
        int difference = INT_MAX;
        int value;
        for (int i = 0; i < size; i++) {
            int curr_diff = abs(a[i] - b[size]);
            if (curr_diff < difference) {
                difference = curr_diff;
                value = a[i];
            } else if (curr_diff == difference && a[i] < value) {
                value = a[i];
            }
        }
        a.push_back(value);
        operations += difference;
   }
    

    cout << operations+1 << endl;
    return;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        inputAndOutput();
    }
    return 0;
}