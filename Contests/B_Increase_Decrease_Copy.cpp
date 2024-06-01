#include <bits/stdc++.h>
using namespace std;

void inputAndOutput() 
{
    long long int size;
    cin >> size;
    vector<long long int> a(size);
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    vector<long long int> b(size + 1);
    for (int i = 0; i < size + 1; i++) {
        cin >> b[i];
    }

    long long int operations = 0;
    int checker=0;
    for (int i=0; i< size; i++)
    {
        operations+= abs(a[i]-b[i]);

        if ((a[i]<=b[size])&&(b[size]<=b[i])||(a[i]>=b[size])&&(b[size]>=b[i]))
        {
            checker=1;
        }
    }

    if (checker==1) a.push_back(b[size]);
   else {
        long long int difference = INT_MAX;
        long long int value;
        for (int i = 0; i < size; i++) {
            int z;
            if (abs(a[i]-b[size])>=abs(b[i]-b[size]))
            {
                z= b[i];
            }
            else z=a[i];
            long long int curr_diff = abs(z - b[size]);
            if (curr_diff < difference) {
                difference = curr_diff;
                value = z;
            } else if (curr_diff == difference && z < value) {
                value = z;
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